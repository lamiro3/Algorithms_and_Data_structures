#include <stdio.h>

struct book {
	int id;
	char title[30];
	char author[20];
};

int main(void) {
	struct book book1 = {
		1,
		"�ٶ��� �Բ� �������",
		"������ ��ÿ"
	};
	
	printf("{ %d, %s, %s}", book1.id, book1.title, book1.author);

	return 0;
}