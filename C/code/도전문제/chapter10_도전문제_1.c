#define _CRT_SECURE_NO_WARNINGS
# define SIZE 10
#include <stdio.h>

int main(void) {
	char isYN;
	int seat_num, seat_num_2;
	int seats[SIZE] = { 0 }; // ��� ���� �ʱⰪ 0���� ����

	while(1) {
		printf("�¼��� �����Ͻðڽ��ϱ�? (y or n): ");
		scanf("%c", &isYN);

		if (isYN == "n")
			break;

		printf("--------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("--------------------\n");

		for (int i = 0; i < SIZE; i++)
			printf("%d ", seats[i]);
		printf("\n");

		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? (2���� �¼��� �����Ͻÿ�): ");
		scanf("%d &d", &seat_num, &seat_num_2);

		if (seats[seat_num - 1] == 0) {
			seats[seat_num - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}

		else
			printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.");

		if (seats[seat_num_2 - 1] == 0) {
			seats[seat_num_2 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}

		else
			printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.");
	}
	return 0;
}