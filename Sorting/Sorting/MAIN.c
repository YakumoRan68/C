#include "Test.c"
#include "Bubble.c"
#include "Heap.c"
#include "Insertion.c"
#include "Merge.c"
#include "Quick.c"
#include "Selection.c"

main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintLine("ToSort", ToSort);

	Insertion(ToSort);

	PrintLine("\nSorted", ToSort);
	EndMain();
}