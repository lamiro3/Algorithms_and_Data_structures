#include <stdio.h>

void arr_add(int* A, int* B, int* C) {
	for (int i = 0; i < 10; i++) {
		C[i] = A[i] + B[i];
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
	int C[10] = { 0 };

	arr_add(A, B, C);
	printf("A[] = ");
	print_arr(A);
	printf("B[] = ");
	print_arr(B);
	printf("C[] = ");
	print_arr(C);

	return 0;
}