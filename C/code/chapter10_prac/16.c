#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void print_grid(int grid[][9]);
int is_blocked(int grid[][9]);

int main(void) {
	int grid[9][9] = { 0 };
	int x = 1;
	int y = 1;

	grid[y][x] = 1;
	grid[5][6] = 2;
	grid[7][4] = 2;
	grid[8][8] = 3;

	print_grid(grid);

	while (!((x == 8) && (y == 8))) {
		if(_kbhit()){
			int key = _getch();

			switch (key) {
			case 119:
				grid[y][x] = 0;
				y--;
				if (is_blocked(grid, x, y))
					y++;
				grid[y][x] = 1;
				print_grid(grid);
				break;

			case 115:
				grid[y][x] = 0;
				y++;
				if (is_blocked(grid, x, y))
					y--;
				grid[y][x] = 1;
				print_grid(grid);
				break;

			case 97:
				grid[y][x] = 0;
				x--;
				if (is_blocked(grid, x, y))
					x++;
				grid[y][x] = 1;
				print_grid(grid);
				break;

			case 100:
				grid[y][x] = 0;
				x++;
				if (is_blocked(grid, x, y))
					x--;
				grid[y][x] = 1;
				print_grid(grid);
				break;
			}
		}
	}

	return 0;
}

void print_grid(int grid[][9]) {
	system("cls");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (grid[i][j] == 0)
				printf(". ");
			else if (grid[i][j] == 1)
				printf("# ");
			else if (grid[i][j] == 2)
				printf("M ");
			else
				printf("G ");
		}
		printf("\n");
	}
}

int is_blocked(int grid[][9], int x, int y) {
	if (grid[y][x] == 2)
		return 1;
	else
		return 0;
}