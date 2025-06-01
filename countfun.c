#include <stdio.h>

int count_vowel(char str[]) {
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

int count_con(char str[]) {
	int conCount = 0;
	int i = 0;

	while (str[i] != '\0') {
	        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
				conCount++;
			}
		}
		i++;
	}
	return conCount;
}

int count_space(char str[]) {
	int spaceCount = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == ' ') {
			spaceCount++;
		}
		i++;
	}
	return spaceCount;
}

int count_punc(char str[]) {
	int punCount = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == ';' || str[i] == ':') {
			punCount++;
		}
		i++;
	}
	return punCount;
}

int main() {
	char sentence[100];

	printf("Enter a sentence: \n");
	fgets(sentence, sizeof(sentence), stdin);

	printf("Vowels: %d | Consonants: %d | Spaces: %d | Punctuation: %d\n", count_vowel(sentence), count_con(sentence), count_space(sentence), count_punc(sentence));

	return 0;
}
