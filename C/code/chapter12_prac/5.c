#include <stdio.h>
#include <ctype.h>

int main(void) {
	while (1) {
		printf("문자를 입력하시오: ");
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