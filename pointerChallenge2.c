#include <stdio.h>

void set_to_zero(int *x) {
	*x = 0;
}

int main() {
	int num = 42;
	set_to_zero(&num);
	printf("%d\n", num);

	return 0;
}
