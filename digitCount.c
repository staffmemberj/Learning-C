#include <stdio.h>

int main() {
    char text[100];
    int i = 0, digitCount = 0, charCount=0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0') {
        if (text[i] >= '0' && text[i] <= '9') {
            digitCount++;
	}
	i++;
    }

    printf("Total digits: %d | Total characters: %d\n", digitCount, charCount);

    return 0;
}

