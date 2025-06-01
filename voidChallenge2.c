#include <stdio.h>

void add_five(int x) {
	x + 5;
}

int main() {
	int a = 10;
	add_five(a);
	printf("After adding 5, the number is %d\n", a);
	return 0;
}
