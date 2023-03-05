#include <stdio.h>

struct book {
	int id;
	char title[30];
	char author[20];
};

int main(void) {
	struct book book1 = {
		1,
		"바람과 함께 사라지다",
		"마가렛 미첼"
	};
	
	printf("{ %d, %s, %s}", book1.id, book1.title, book1.author);

	return 0;
}