#include "lib.h"

struct node {
	int key;
	struct node* left, * right;
};

struct node* root = NULL;

struct node* newNode(int item) {
	struct node* inst = (struct node*)malloc(sizeof(struct node)); //새로운 노드 객체 생성
	inst->key = item;
	inst->left = inst->right = NULL;

	return inst;
}

struct node* insert(struct node* node, int key) {
	if (node == NULL) return newNode(key); //더이상 자식이 없을경우 새로운 노드를 생성.

	if (key > node->key) //넣어야 할 값이 현재 노드보다 크면 오른쪽 자식 노드로 탐색
		node->right = insert(node->right, key);
	else if (key < node->key) //작으면 왼쪽노드
		node->left = insert(node->left, key);

	return node;
}

int SearchTree(struct node* root) {
	if (root == NULL) return -1; //탐색을 했지만 못찾음
	if (root->key == search) return -2; //찾음

	if (root->key < search) //찾고싶은 값보다 크면 오른쪽 노드
		return SearchTree(root->right);

	return SearchTree(root->left); //작으면 왼쪽노드
}

int searchTree(struct node* root) {
	while (root != NULL) {
		if (root->key < search) //찾고싶은 값보다 크면 오른쪽 노드
			root = root->right;
		else if (root->key > search) //작으면 왼쪽노드
			root = root->left; 
		else return -2; //찾음
	}
	return -1; //못찾음
}

void MakeTree() { 
	root = insert(root, array[0]);
	for (int i = 1; i < ARRAYSIZE; i++) insert(root, array[i]);
}

void printTree(struct node* root) {
	if (root != NULL) {
		printTree(root->left);
		printf("%d \n", root->key);
		printTree(root->right);
	}
}
 
void FreeTree(struct node* node) { //깊이 우선 탐색(DFS)
	if (node != NULL) {
		FreeTree(node->right);
		FreeTree(node->left);
		free(node);
	}
}

void TreeBinary() {
	MakeTree(); //트리 구성

	//result = SearchTree(root); //재귀문
	result = searchTree(root); //반복문
	//printTree(root);  //트리를 순회하면서 값을 순서대로 출력
	FreeTree(root); //동적할당한 트리들 전부 할당해제
}