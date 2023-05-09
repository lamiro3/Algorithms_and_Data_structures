#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));

	int n_count[10] = { 0 };

	for (int i = 0; i < 100; i++) {
		int num = rand() % 10;
		n_count[num] += 1;
	}

	int max = 0;
	int idx = 0;

	for (int j = 0; j < 10; j++) {
		if (n_count[j] > max) {
			max = n_count[j];
			idx = j;
		}
	}

	printf("가장 많이 나온 수 = %d", idx + 1);
}