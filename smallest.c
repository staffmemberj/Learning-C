#include <stdio.h>

int main() {
	int nums[5];
	int min;

	printf("Give me 5 numbers\n");
	for (int i = 0; i < 5; i++) {
		printf("Number %d: ", i+1);
		scanf("%d", &nums[i]);
	}

	min = nums[0];

	for (int i = 1; i < 5; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}

	printf("The smallest number is: %d\n", min);

	return 0;
}
