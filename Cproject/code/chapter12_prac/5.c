#include <stdio.h>
#include <ctype.h>

int main(void) {
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		getchar();
		int t = getchar();
		if (t == '.')
			break;
		
		if (islower(t)) {
			putchar(toupper(t));
		}
		else if (isupper(t)) {
			putchar(tolower(t));
		}
		printf("\n");
	}
	return 0;
}