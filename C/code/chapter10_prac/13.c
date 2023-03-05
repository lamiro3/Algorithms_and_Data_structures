#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int binary[32] = { 0 };
	int dec, idx;

	scanf("%d", &dec);
	printf("%d->", dec);

	for (int i = 0; i < 32 && dec > 0; i++) {
		binary[i] = dec % 2;
		dec = dec / 2;

		if (binary[i] == 1)
			idx = i;
	}

	for (int j = idx; j >= 0; j--) {
		printf("%d", binary[j]);
	}

	return 0;
}