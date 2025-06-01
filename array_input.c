#include <stdio.h>

int main() {
	int numbers[5];

	//Input phase
	printf("Enter 5 numbers:\n");
	for (int i = 0; i < 5; i++) {
		printf("Number %d: ", i+1);
		scanf("%d", &numbers[i]);
	}

	//Output phase
	printf("You entered:\n");
	for (int i = 0; i<5; i++) {
		printf("Index %d = %d\n", i, numbers[i]);
	}

	return 0;

}
