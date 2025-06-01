#include <stdio.h>

void make_hundred(int x) {
	x = 100;
}

int main() {
	int a = 5;
	make_hundred(a);
	printf("a = %d\n", a);
	return 0;
}
