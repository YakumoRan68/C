#include "lib.h"

struct node {
	int key;
	struct node* left, * right;
};

struct node* root = NULL;

struct node* newNode(int item) {
	struct node* inst = (struct node*)malloc(sizeof(struct node)); //���ο� ��� ��ü ����
	inst->key = item;
	inst->left = inst->right = NULL;

	return inst;
}

struct node* insert(struct node* node, int key) {
	if (node == NULL) return newNode(key); //���̻� �ڽ��� ������� ���ο� ��带 ����.

	if (key > node->key) //�־�� �� ���� ���� ��庸�� ũ�� ������ �ڽ� ���� Ž��
		node->right = insert(node->right, key);
	else if (key < node->key) //������ ���ʳ��
		node->left = insert(node->left, key);

	return node;
}

int SearchTree(struct node* root) {
	if (root == NULL) return -1; //Ž���� ������ ��ã��
	if (root->key == search) return -2; //ã��

	if (root->key < search) //ã����� ������ ũ�� ������ ���
		return SearchTree(root->right);

	return SearchTree(root->left); //������ ���ʳ��
}

int searchTree(struct node* root) {
	while (root != NULL) {
		if (root->key < search) //ã����� ������ ũ�� ������ ���
			root = root->right;
		else if (root->key > search) //������ ���ʳ��
			root = root->left; 
		else return -2; //ã��
	}
	return -1; //��ã��
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
 
void FreeTree(struct node* node) { //���� �켱 Ž��(DFS)
	if (node != NULL) {
		FreeTree(node->right);
		FreeTree(node->left);
		free(node);
	}
}

void TreeBinary() {
	MakeTree(); //Ʈ�� ����

	//result = SearchTree(root); //��͹�
	result = searchTree(root); //�ݺ���
	//printTree(root);  //Ʈ���� ��ȸ�ϸ鼭 ���� ������� ���
	FreeTree(root); //�����Ҵ��� Ʈ���� ���� �Ҵ�����
}