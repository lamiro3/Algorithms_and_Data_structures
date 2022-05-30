#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main(void) {
	int key;
	int grade[SIZE] = { 2, 6, 11, 15, 17, 18, 23, 29, 35, 36, 39, 40, 45, 61 };
	printf("Å½»öÇÒ °ª: ");
	scanf("%d", &key);
	printf("Å½»ö °á°ú = %d\n", binary_search(grade, SIZE, key));
	return 0;
}

int binary_search(int list[], int n, int key) {
	int low, high, mid;
	low = 0;
	high = n - 1;

	while (low <= high) {
		printf("[%d %d]\n", low, high);
		mid = (low + high) / 2;
		if (key == list[mid])
			return mid;
		else if (key > list[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}