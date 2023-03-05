#include <stdio.h>

void convert(double* grades, double* scores, int size) {
	int i;
	for (i = 0; i < size; i++) {
		scores[i] = grades[i] * 100 / 4.3;
	}
}

void print_arr(double a[]) {
	for (int i = 0; i < 10; i++) {
		printf("%05.2f ", a[i]);
	}
	printf("\n");
}

int main(void) {
	double grades[10] = { 0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.3 };
	double scores[10] = { 0 };

	convert(grades, scores, 10);
	print_arr(grades);
	print_arr(scores);

	return 0;
}