#include <stdio.h>

int main() {
	char letter;

	printf("Enter a letter: ");
	scanf(" %c", &letter); //notice the space before %c

	printf("You entered: %c\n", letter);

	return 0;
}
