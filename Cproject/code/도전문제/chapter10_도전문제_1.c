#define _CRT_SECURE_NO_WARNINGS
# define SIZE 10
#include <stdio.h>

int main(void) {
	char isYN;
	int seat_num, seat_num_2;
	int seats[SIZE] = { 0 }; // 모든 원소 초기값 0으로 설정

	while(1) {
		printf("좌석을 예약하시겠습니까? (y or n): ");
		scanf("%c", &isYN);

		if (isYN == "n")
			break;

		printf("--------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("--------------------\n");

		for (int i = 0; i < SIZE; i++)
			printf("%d ", seats[i]);
		printf("\n");

		printf("몇 번째 좌석을 예약하시겠습니까? (2개의 좌석을 선택하시오): ");
		scanf("%d &d", &seat_num, &seat_num_2);

		if (seats[seat_num - 1] == 0) {
			seats[seat_num - 1] = 1;
			printf("예약되었습니다.\n");
		}

		else
			printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.");

		if (seats[seat_num_2 - 1] == 0) {
			seats[seat_num_2 - 1] = 1;
			printf("예약되었습니다.\n");
		}

		else
			printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.");
	}
	return 0;
}