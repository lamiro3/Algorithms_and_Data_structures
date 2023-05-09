#include <stdio.h>

void array_print(int* A, int size) {
	int i;
	printf("A[] = { ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}

int main(void) {
	int A[5] = { 1, 2, 3, 4, 5 };

	array_print(A, 5);
	return 0;
}