#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int nums[3][10] = {
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 4, 9, 16, 25, 36, 49, 64, 81, 100},
		{1, 8, 27, 64, 125, 216, 343, 512, 729, 1000}
	};

	int num;

	printf("정수를 입력하시오:");
	scanf("%d", &num);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (nums[i][j] == num) {
				printf("%d의 세제곱근은 %d", num, nums[0][j]);
			}
		}
	}

	return 0;
}