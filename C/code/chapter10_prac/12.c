#include <stdio.h>

void scalar_mult(int a[][3], int scalar);
void transpose(int a[][3], int b[][3]);

int main(void) {
	int mat[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int trs[3][3] = { 0 };

	transpose(mat, trs);
	scalar_mult(mat, 2);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", trs[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void scalar_mult(int a[][3], int scalar) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			a[i][j] = a[i][j] * scalar;
	}
}

void transpose(int a[][3], int b[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			b[j][i] = a[i][j];
	}
}