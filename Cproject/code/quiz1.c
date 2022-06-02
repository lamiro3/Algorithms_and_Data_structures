#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_score(int score[][4]);

int main(void) {
	char name[9][9] = { "Alpha", "Beta", "Gamma", "Delta", "Epsilon", "Zeta", "Eta", "Theta", "Lota" };
	int score[9][4] = { 0 };

	get_score(score);
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j)
				continue;
			
			if (score[i][2] == score[j][2]) {
				if (score[i][3] > score[j][3])
					score[i][3] = score[j][3];
				else
					score[j][3] = score[i][3];
			}
		}
	}

	printf("        중간   기말   합계   순위\n");
	
	for (int i = 0; i < 9; i++) {
		printf("%-7s %3d %6d %6d %6d\n", name[i], score[i][0], score[i][1], score[i][2], score[i][3]);
	}
	printf("\n");
	printf("\n");
	printf("1등: ");

	for (int i = 0; i < 9; i++) {
		if (score[i][3] == 1)
			printf("%s ", name[i]);
	}

	printf("\n");
	printf("=================================");

	return 0;
}

void get_score(int score[][4]) {
	int total[9] = { 0 };
	int rank[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int temp;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 9; i++) {
		score[i][0] = (rand() % 99) + 1;
		score[i][1] = (rand() % 99) + 1;
		score[i][2] = score[i][0] + score[i][1];
		total[i] = score[i][2];
	}

	for (int j = 0; j < 9; j++) {
		for (int k = 0; k < 9; k++) {

			temp = 0;

			if (j == k)
				continue;

			else if (rank[j] < rank[k]) {
				if (total[j] < total[k]) {
					temp = rank[j];
					rank[j] = rank[k];
					rank[k] = temp;
				}
			}
			else {
				if (total[j] > total[k]) {
					temp = rank[j];
					rank[j] = rank[k];
					rank[k] = temp;
				}
			}
		}
	}

	for (int i = 0; i < 9; i++){
		score[i][3] = rank[i];
	}
}