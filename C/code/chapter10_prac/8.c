#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10

int main(void) {
	srand((unsigned)time(NULL));

	int nums[N] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	double sum = 0;
	double d = 0;
	double mean, sd;
	
	for (int i = 0; i < N; i++) {
		//nums[i] = (double)rand();
		sum += nums[i];
		printf("데이터를 입력하십시오:%d\n", nums[i]);
	}

	mean = sum / N;

	for (int i = 0; i < N; i++) {
		d += (nums[i] - mean) * (nums[i] - mean);
	}

	sd = sqrt(d / N);

	printf("평균값은 %f\n", mean);
	printf("표준편차값은 %f\n", sd);

	return 0;
}