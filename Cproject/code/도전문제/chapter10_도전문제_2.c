#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 0 };
	int i, max;
	printf("---------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------\n");

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1; //1 ~ 100 범위의 임의의 정수
		printf("%-3d", prices[i]);
	}
	printf("\n\n");

	max = prices[0];

	for (i = 1; i < SIZE; i++) {
		if (prices[i] > max)
			max = prices[i];
	}
	printf("최댓값은 %d입니다.\n", max);
	return 0;
}