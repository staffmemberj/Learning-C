#include <stdio.h>

int main() {
	char str[] = "Hello, world!";
	int i = 0;

	// Find the string length manually
	while (str[i] != '\0') {
		i++;
	}

	// Print characters in reverse
	printf("Reversed: ");
	for (int j = i - 1; j >= 0; j--) {
		printf("%c", str[j]);
	}
	printf("\n");

	return 0;
}
