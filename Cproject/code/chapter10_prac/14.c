#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void render(int tile[][9]);

int main(void) {
	int tile[9][9] = { 0 };
	srand((unsigned)time(NULL));
	int x = 4;
	int y = 4;

	while ((x>=0) || (x<=8) || (y >= 0) || (y <= 8))
	{
		int next = rand() % 8;

		switch (next)
		{
		case 0:
			y--;
			break;
		
		case 1:
			y--;
			x++;
			break;
		
		case 2:
			x++;
			break;

		case 3:
			y++;
			x++;
			break;

		case 4:
			y++;
			break;

		case 5:
			y++;
			x--;
			break;

		case 6:
			x--;
			break;

		case 7:
			y--;
			x--;
			break;
		}

		tile[y][x] = 1;
		render(tile);
	}
	return 0;
}

void render(int tile[][9]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", tile[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}