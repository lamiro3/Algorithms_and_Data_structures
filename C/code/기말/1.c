#include <stdio.h>
#define N_DATA 10

void array_copy(int* a, int* b, int size) {
	int i;
	for (i = 0; i < size; i++) {
		b[i] = a[i];
	}
}

void array_print(char s, int* a, int size) {
	printf("%c[] = ", s);
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main(void) {
	int A[N_DATA] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int B[N_DATA] = { 0 };

	array_copy(A, B, N_DATA);
	array_print('A', A, N_DATA);
	array_print('B', B, N_DATA);

	return 0;
}