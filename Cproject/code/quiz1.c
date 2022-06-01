#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9
#include <stdio.h>
#include <string.h>

void get_info(char name[][9], int score[][4], char top_scorer[][9]);

int main(void) {
	char name[9][9];
	int score[9][4] = { 0 };
	char top_scorer[9][9];

	get_info(name, score, top_scorer);
	int top_size = sizeof(top_scorer) / sizeof(top_scorer[0]);
	printf("1등: ");

	for (int i = 0; i < top_size; i++) {
		printf("%s", top_scorer[i]);
	}

	return 0;
}

void get_info(char name[][9], int score[][4], char top_scorer[][9]) {
	int cnt = 0;
	for (int i = 0; i < SIZE; i++) {
		scanf("%s %d %d %d %d", &name[i], &score[i][0], &score[i][1], &score[i][2], &score[i][3]);

		if (score[i][3] == 1) {
			for (int k = 0; k < SIZE; k++) {
				top_scorer[cnt][k] = name[i][k];
				cnt += 1;
			}
		}
	}
	printf("\n");
	printf("       중간     기말     합계     순위\n");

	for (int j = 0; j < SIZE; j++) {
		printf("%s %5d %5d %5d %5d\n", name[j], score[j][0], score[j][1], score[j][2], score[j][3]);
	}
}