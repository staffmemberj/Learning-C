#include <stdio.h>

int main() {
	char word[]="Hello";
	int i=0;
	
	while (word[i] != '\0') {
		printf("Character %d: %c\n", i, word[i]);
		i++;
	}

	return 0;
}
