#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void) {
	int x = 200;
	int y = 100;

	int sum = 0;
	int diff = 0;

	get_sum_diff(x, y, &sum, &diff);

	printf("���ҵ��� ��:%d\n", sum);
	printf("���ҵ��� ��:%d", diff);
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}