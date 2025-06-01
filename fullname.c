#include <stdio.h>

int main() {
	char fullName[50];

	printf("Enter your full name: ");
	fgets(fullName, sizeof(fullName), stdin);

	printf("Nice to meet you, %s", fullName);

	return 0;
}
