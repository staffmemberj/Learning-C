#include <stdio.h>

int main() {
	char text[]="Hello world!";
	int i = 0, vowels = 0;

	while (text[i] != '\0') {
		char ch = text[i];

		if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
			vowels++;
		}

		i++;
	}

	printf("Total vowels: %d\n", vowels);

	return 0;
}
