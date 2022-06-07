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
		printf(" 1. 추가\n");
		printf(" 2. 출력\n");
		printf(" 3. 검색\n");
		printf(" 4. 종료\n");
		printf("==============\n");
		printf("정수값을 입력하시오 : ");

		int option;
		scanf("%d", &option);

		if (option == 1) { // buffer 제거할 수 있는 방법 찾기
			m_num++;
			printf("제목: ");
			gets_s(musics[m_num - 1].title, 100);
			printf("가수: ");
			gets_s(musics[m_num - 1].singer, 100);
			printf("위치: ");
			gets_s(musics[m_num - 1].path, 100);
			printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): ");
			scanf("%d", &musics[m_num - 1].genre);
		}

		else if (option == 2) {
			printf("제목: %s\n", musics[m_num - 1].title);
			printf("가수: %s\n", musics[m_num - 1].singer);
			printf("위치: %s\n", musics[m_num - 1].path);
			printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): %d\n", musics[m_num - 1].genre);
		}

		else if (option == 3) {
			char search[100];
			printf("검색할 노래의 제목을 입력하시오: ");
			gets_s(search, 100);

			for (int i = 0; i < m_num; i++) {
				if (strcmp(search, musics[i].title) == 0) {
					printf("제목: %s\n", musics[i].title);
					printf("가수: %s\n", musics[i].singer);
					printf("위치: %s\n", musics[i].path);
					printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): %d\n", musics[i].genre);
				}
			}
		}

		else
			break;
	}

	return 0;
}