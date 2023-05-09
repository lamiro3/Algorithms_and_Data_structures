#include <stdio.h>

void array_copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

void print_arr(int a[]) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int B[10] = { 0 };

	array_copy(A, B, 10);
	print_arr(A);
	print_arr(B);

	return 0;
}