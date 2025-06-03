#include <stdio.h>

void print_chars(const char *str) {
	int i = 0;
	while (str[i] != '\0') {
		printf("%c\n", str[i]);
		i++;
	}
}

int main() {
	char hello[]={"Hello!"};
	print_chars(hello);
	return 0;
}
