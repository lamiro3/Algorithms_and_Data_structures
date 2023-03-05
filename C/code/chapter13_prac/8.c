#define PI 3.14
#include <stdio.h>

typedef struct circle CIRCLE;

struct point {
	int x;
	int y;
};

struct circle {
	struct point center;
	double radius;
};

double area(CIRCLE c) {
	return c.radius * c.radius * PI;
}

double perimeter(CIRCLE c) {
	return 2 * PI * c.radius;
}

int main(void) {
	CIRCLE c = { {0, 0}, 10 };
	printf("���� �߽���: %d %d\n", c.center.x, c.center.y);
	printf("���� ������: %f\n", c.radius);
	printf("���� ����=%f, ���� �ѷ�=%f", area(c), perimeter(c));

	return 0;

}