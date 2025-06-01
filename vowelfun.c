#include <stdio.h>

int count_vowels(char str[]) {
	int vowelCount = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			vowelCount++;
		}
		i++;
	}
	return vowelCount;
}

int main() {
	char sentence[100];

	printf("Enter a sentence: \n");
	fgets(sentence, sizeof(sentence), stdin);

	int results = count_vowels(sentence);
	printf("Vowels: %d\n", results);

	return 0;
}
