#include <stdio.h>

void func(void) {
	static int i = 0;
	printf("%d\n", i++);
}

int main(void) {
	func();
	func();
	return 0;
}