#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int grades[10][3] = { 0 };

	srand((unsigned)time(NULL));

	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 3; c++)
			grades[r][c] = (rand() % 99) + 1;
	}

	int max[3] = { grades[0][0], grades[1][0], grades[2][0] };
	int min[3] = { grades[0][0], grades[1][0], grades[2][0] };

	for (int c = 0; c < 3; c++) {
		for (int r = 0; r < 10; r++) {
			if (max[c] < grades[r][c])
				max[c] = grades[r][c];
			if (min[c] > grades[r][c])
				min[c] = grades[r][c];
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("시험 #%d의 최대점수=%d\n", i, max[i]);
		printf("시험 #%d의 최저점수=%d\n", i, min[i]);
	}

	return 0;
}