#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {
	int key, i;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	printf("Å½»öÇÒ °ª: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)
		if (list[i] == key)
			printf("Å½»ö ¼º°ø ÀÎµ¦½º: %d\n", i);

	printf("Å½»ö Á¾·á\n");
	return 0;
}