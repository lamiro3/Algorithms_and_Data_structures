#include <stdio.h>

struct account {
	int number;
	char name[20];
	int balance;
};

int main(void) {
	struct account ac1 = {
		1,
		"ȫ�浿",
		100000
	};

	printf("{ %d, %s, %d}", ac1.number, ac1.name, ac1.balance);

	return 0;
}