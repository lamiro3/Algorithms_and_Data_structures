#include <stdio.h>

struct point {
	int x;
	int y;
};

int quadrant(struct point p) {
	if (p.x > 0 && p.y > 0)
		return 1;
	else if (p.x < 0 && p.y > 0)
		return 2;
	else if (p.x < 0 && p.y < 0)
		return 3;
	else
		return 4;
}

int main(void) {
	struct point p = { -1, 2 };
	printf("(%d, %d)�� ��и� = %d", p.x, p.y, quadrant(p));

	return 0;
}