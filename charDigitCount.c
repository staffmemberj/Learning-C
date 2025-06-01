#include <stdio.h>

int main() {
    char text[100];
    int i = 0, digitCount = 0, charCount=0, spaceCount = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0') {
        if (text[i] >= '0' && text[i] <= '9') {
            digitCount++;
        } else if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
		charCount++;
	} else if (text[i] == ' '){
		spaceCount++;
	}
        i++;
    }

    printf("Total digits: %d | Total characters: %d | Total spaces: %d\n", digitCount, charCount, spaceCount);

    return 0;
}

