#include <stdio.h>

void greet_user(char name[]) {
	printf("Hello %s\n", name);
}

int main() {
	char name[] = "Alice";
	greet_user(name);
	return 0;
}
