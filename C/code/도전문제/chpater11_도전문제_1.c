#include <stdio.h>
#define SIZE 5

void print_image(int image[][SIZE]) {
	int r, c;
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%03d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}

void brighten_image(int image[][SIZE]) {
	int r, c;
	
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			image[r][c] += 10; // 포인터 이용하지 않고, 배열의 인덱스 표기법으로만 이용하여 구현
		}
	}
}

int main(void) {
	int image[5][5] = {
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50}
	};

	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;
}