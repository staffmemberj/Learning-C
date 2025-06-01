#include <stdio.h>

int main() {
	char text[100];
	int i = 0;

	printf("Enter a sentence: ");
	fgets(text, sizeof(text), stdin);

	while (text[i] != '\0') {
		if (text[i] >='A' && text[i] <= 'Z') {
			text[i] = text[i] + 32;
		}
		i++;
	}

	printf("Lowercase: %s", text);

	return 0;

}
