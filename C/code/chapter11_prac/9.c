#include <stdio.h>

int search(int* A, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}

int main(void) {
	int A[10] = { 100, 200, 300, 400, 500, 700, 800, 900, 1000, 600 };
	printf("월급이 200만원인 사람의 인덱스: %d", search(A, 10, 200));
	return 0;
}