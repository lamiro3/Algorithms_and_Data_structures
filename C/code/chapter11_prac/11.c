#include <stdio.h>

void merge(int* A, int* B, int* C, int size) {
	int j = 0;
	int k = 0;

	for (int i = 0; i < size; i++) {
		if (A[j] < B[k]) {
			if (j > 3) {
				C[i] = B[k];
				k++;
			}
			else {
				C[i] = A[j];
				j++;
			}
		}
		else {
			if (k > 3) {
				C[i] = A[j];
				j++;
			}
			else {
				C[i] = B[k];
				k++;
			}
		}
	}
}

void print_arr(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	int A[4] = { 2, 5, 7, 8 };
	int B[4] = { 1, 3, 4, 6 };
	int C[8] = { 0 };

	merge(A, B, C, 8);

	printf("A[] = ");
	print_arr(A, 4);
	printf("B[] = ");
	print_arr(B,4 );
	printf("C[] = ");
	print_arr(C, 8);

	return 0;
}