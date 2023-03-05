#include <stdio.h>

int main(void) {

	int arr[3][5] = {
		{12, 56, 32, 16, 98},
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21}
	};

	for (int r = 0; r < 3; r++)
		printf("%d행의 합계: %d\n", r, arr[r][0] + arr[r][1] + arr[r][2] + arr[r][3] + arr[r][4]);

	for (int c = 0; c < 5; c++)
		printf("%d열의 합계: %d\n", c, arr[0][c] + arr[1][c] + arr[2][c]);

	return 0;
}