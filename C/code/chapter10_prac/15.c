#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int grid[10][10] = { 0 };
	int bound = 0;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			bound = rand() % 99;
			if (bound < 30) // 전체 영역의 30%를 지뢰로 설정
				grid[i][j] = 1;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (grid[i][j] == 0)
				printf(". ");
			else
				printf("# ");
		}
		printf("\n");
	}

	return 0;
}