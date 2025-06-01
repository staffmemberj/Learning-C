#include <stdio.h>

int main() {
	char name[30];

	printf("What's your name? ");
	scanf("%s", name);

	printf("Nice to meet you %s!\n", name);

	return 0;
}
