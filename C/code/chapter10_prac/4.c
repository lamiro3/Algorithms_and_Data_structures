#include <stdio.h>

void array_copy(int a[], int b[], int size);
void print_arr(int a[], int size);

int main(void) {
	int size = 10;
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	array_copy(a, b, size);
	print_arr(a, size);
	print_arr(b, size);

	return 0;
}

void array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}

void print_arr(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}