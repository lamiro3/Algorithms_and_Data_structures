#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_max(int nums[]);
int get_min(int nums[]);

int main(void) {
	int nums[10] = { 0 };
	
	srand((unsigned)time(NULL));

	printf("Indices: ");

	for (int i = 0; i < 10; i++) {
		nums[i] = rand();
		printf("%d, ", nums[i]);
	}
	printf("\n");
	printf("MAX: %d\n", get_max(nums));
	printf("MIN: %d", get_min(nums));
}

int get_max(int nums[]) {
	int max = nums[0];

	for (int i = 0; i < 10; i++) {
		if (max < nums[i])
			max = nums[i];
	}

	return max;
}

int get_min(int nums[]) {
	int min = nums[0];

	for (int i = 0; i < 10; i++) {
		if (min > nums[i])
			min = nums[i];
	}

	return min;
}