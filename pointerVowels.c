#include <stdio.h>

int count_vowels(const char *str) {
	int vowelCount = 0;
	while (*str != '\0') {
		if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
			vowelCount++;
		}
		str++;
	}
	return vowelCount;
}

int main() {
	char hello[] = "Hello world";
	printf("%s\n", hello);
	printf("%s has %d vowels.\n", hello, count_vowels(hello));
	return 0;
}
