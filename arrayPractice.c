#include <stdio.h>

int main() {
	int numbers[4];

	printf("Give me 4 numbers!\n");
	for (int i = 0; i < 4; i++) {
		printf("Number %d: ", i+1);
		scanf("%d", &numbers[i]);
	}

	printf("You entered:\n");
	for (int i = 0; i < 4; i++) {
		if (numbers[i] > 10) {
			printf("Number %d: %d\n", i+1, numbers[i]*2);
		}
	}

	return 0;

}
