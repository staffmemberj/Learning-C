#include <stdio.h>

int main() {
	int num = 42;
	int *ptr = &num;

	*ptr = 99;

	printf("The value of 'num' is: %d\n", num);
	printf("The value of 'ptr' is: %p\n", ptr);

	return 0;
}
