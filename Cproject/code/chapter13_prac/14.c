#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct music {
	char title[100];
	char singer[100];
	char path[100];
	int genre;
};

int m_num = 0;

int main(void) {
	struct music musics[100];

	while (1) {
		printf("==============\n");
		printf(" 1. �߰�\n");
		printf(" 2. ���\n");
		printf(" 3. �˻�\n");
		printf(" 4. ����\n");
		printf("==============\n");
		printf("�������� �Է��Ͻÿ� : ");

		int option;
		scanf("%d", &option);

		if (option == 1) { // buffer ������ �� �ִ� ��� ã��
			m_num++;
			printf("����: ");
			gets_s(musics[m_num - 1].title, 100);
			printf("����: ");
			gets_s(musics[m_num - 1].singer, 100);
			printf("��ġ: ");
			gets_s(musics[m_num - 1].path, 100);
			printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): ");
			scanf("%d", &musics[m_num - 1].genre);
		}

		else if (option == 2) {
			printf("����: %s\n", musics[m_num - 1].title);
			printf("����: %s\n", musics[m_num - 1].singer);
			printf("��ġ: %s\n", musics[m_num - 1].path);
			printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): %d\n", musics[m_num - 1].genre);
		}

		else if (option == 3) {
			char search[100];
			printf("�˻��� �뷡�� ������ �Է��Ͻÿ�: ");
			gets_s(search, 100);

			for (int i = 0; i < m_num; i++) {
				if (strcmp(search, musics[i].title) == 0) {
					printf("����: %s\n", musics[i].title);
					printf("����: %s\n", musics[i].singer);
					printf("��ġ: %s\n", musics[i].path);
					printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): %d\n", musics[i].genre);
				}
			}
		}

		else
			break;
	}

	return 0;
}