#include <stdio.h>

void print_char(const char *str) {
	while (*str != '\0') {
		printf("%c\n", *str);
		str++;
	}
}

int main() {
	char hello[]="Hello!";
	print_char(hello);
	return 0;
}
