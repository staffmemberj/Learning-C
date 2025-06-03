#include <stdio.h>

void swap_element(int *arr, int index1, int index2) {
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

int main() {
	int nums[] = {10, 20, 30, 40, 50};
	printf("Index 0 = %d|Index 1 = %d |Index 2 = %d |Index 3 = %d |Index 4 = %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);
	swap_element(nums, 1, 4);
	printf("Swapped indexes 1 and 4, so now Index 1 = %d and Index 2 = %d\n", nums[1], nums[4]);
	return 0;
}
