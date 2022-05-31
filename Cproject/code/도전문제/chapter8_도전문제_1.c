#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n) {
	int i;

	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}


int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 2; i < n + 1; i++) {
		if (is_prime(i))
			printf("%d ", i);
	}

	return 0;
}