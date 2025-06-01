#include <stdio.h>

int max (int a, int b) {
	if (a > b) {
		return a;
	} else if (a < b) {
		return b;
	}
}

int main() {
	int result = max(13, 12);
	printf("%d is the larger number.\n", result);
	return 0;
}
