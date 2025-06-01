#include <stdio.h>

int main() {
	
	char sentence[100];
	int i = 0, lowerCount = 0, upperCount = 0; 

	printf("Type a sentence:\n");
	fgets(sentence, sizeof(sentence), stdin);
	while (sentence[i] != '\0') {
		if (sentence[i] >= 'a' && sentence[i] <= 'z') { 
			lowerCount++;
		} else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
			upperCount++;
		}
		i++;
	}

	printf("Uppercase: %d | Lowercase: %d \n", upperCount, lowerCount);

	return 0;
}
