#include <stdio.h>

struct x {
	char t[100];
};

void func(int y) {
	y = 20;
}

int main(void) {
	struct x x1;
	char t[100];
	printf("dkdkd");
	gets_s(x1.t, 100);
	printf("%s", x1.t);
	return 0;
}