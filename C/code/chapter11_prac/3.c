#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size) {
	int i;
	for (i = 0; i < size; i++) {
		*(A+i) = rand();
	}
}

int main(void) {
	srand((unsigned)time(NULL));

	int A[10] = { 0 };
	array_fill(A, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}

	return 0;
}