#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card
{
	int value;
	char suit;
};

int main(void) {
	struct card cards[52];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			cards[13 * i + j].value = j + 1;

			switch (i)
			{
			case 0:
				cards[13 * i + j].suit = 'c';
				break;

			case 1:
				cards[13 * i + j].suit = 'd';
				break;

			case 2:
				cards[13 * i + j].suit = 'h';
				break;

			case 3:
				cards[13 * i + j].suit = 's';
				break;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			printf("%d:%c ", cards[13 * i + j].value, cards[13 * i + j].suit);
		}
	}

	return 0;
}