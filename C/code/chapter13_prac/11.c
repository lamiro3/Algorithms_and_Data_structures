#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct info
{
	char name[100];
	char hnum[100];
	char pnum[100];
};

int main(void) {
	struct info infos[3];

	for (int i = 0; i < 3; i++) {
		printf("�̸��� �Է��Ͻÿ�:");
		gets_s(infos[i].name, 100);
		printf("����ȭ��ȣ�� �Է��Ͻÿ�:");
		gets_s(infos[i].hnum, 100);
		printf("�޴�����ȣ�� �Է��Ͻÿ�:");
		gets_s(infos[i].pnum, 100);
	}

	char s_name[100];

	printf("�˻��� �̸��� �Է��Ͻÿ�:");
	gets_s(s_name, 100);

	for (int i = 0; i < 3; i++) {
		if (strcmp(s_name, infos[i].name) == 0) {
			printf("����ȭ��ȣ: %s\n", infos[i].hnum);
			printf("�޴�����ȣ: %s\n", infos[i].pnum);
		}
	}

	return 0;
}