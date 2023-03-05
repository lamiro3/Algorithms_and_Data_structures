#include <stdio.h>

struct point {
	int x;
	int y;
};

int equal(struct point *p1, struct point *p2) {
	if ((p1->x != p2->x) || (p1->y != p2->y))
		return 0;
	else
		return 1;
}

int main(void) {
	struct point* pp1;
	struct point* pp2;
	struct point p1 = { 1, 2 };
	struct point p2 = { 3, 5 };

	pp1 = &p1;
	pp2 = &p2;

	if (equal(pp1, pp2) == 0)
		printf("(%d, %d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x, p2.y);

	return 0;
}