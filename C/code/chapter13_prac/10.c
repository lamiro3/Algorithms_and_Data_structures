#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct employee {
	int num;
	char name[100];
	char pnum[100];
	int age;
};

int main(void) {
	struct employee e[10];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		e[i].num = i + 1;
		strcpy(e[i].name, "������");
		e[i].age = (rand() % 20) + 20;
	}

	for (int i = 0; i < 10; i++) {
		if (e[i].age >= 20 && e[i].age <= 30)
			printf("�̸�=%s%d ����=%d\n", e[i].name, e[i].num, e[i].age);
	}
	return 0;
}