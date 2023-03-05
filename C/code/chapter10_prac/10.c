#include <stdio.h>

void vector_add(double x[], double y[], double z[]);
double vector_dot_prod(double x[], double y[]);

int main(void) {
	double x[3] = { 1, 2, 3 };
	double y[3] = { 1, 2, 3 };
	double x_plus_y[3] = { 0 };

	vector_add(x, y, x_plus_y);
	double x_dot_y = vector_dot_prod(x, y);

	printf("∫§≈Õ¿« «’: [");

	for (int i = 0; i < 3; i++)
		printf(" %f", x_plus_y[i]);

	printf("]\n");

	printf("∫§≈Õ¿« ≥ª¿˚: %f", x_dot_y);

	return 0;

}

void vector_add(double x[], double y[], double z[]) {
	for (int i = 0; i < 3; i++)
		z[i] = x[i] + y[i];
}

double vector_dot_prod(double x[], double y[]) {
	int result = 0;

	for (int i = 0; i < 3; i++) {
		result += (x[i] * y[i]);
	}

	return result;
}