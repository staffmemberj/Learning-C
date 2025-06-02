#include <stdio.h>

int main() {
	int num = 42;
	int *ptr = &num;

	printf("The value of 'num' is: %d\n", num);
	printf("The address of 'num' is %p\n", &num);
	printf("The value stored at 'ptr' is %d\n", *ptr);

	return 0;
}
