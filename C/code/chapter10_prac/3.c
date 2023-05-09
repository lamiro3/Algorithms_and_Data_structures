#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main(void) {
	int size = 10;
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	if (array_equal(a, b, size) == 0)
		printf("2개의 배열은 다름");
	else
		printf("2개의 배열은 같음");

	return 0;
}

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}