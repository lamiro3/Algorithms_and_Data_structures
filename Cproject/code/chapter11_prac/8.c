#include <stdio.h>

void print_arr(int a[]) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}

	return sum;
}

int main(void) {
	int A[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };

	print_arr(A);
	printf("월급의 합: %d", array_sum(A, 10));

	return 0;
}