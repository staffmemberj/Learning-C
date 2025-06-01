#include <stdio.h>

int main () {
	
	int num1,num2;
	char op;
	
	printf("What 2 numbers would you like to calculate? ");
	scanf("%d %c %d", &num1, &op, &num2);

	if (op == '+') {
		printf("Sum: %d \n", num1 + num2);
	} else if (op == '-') {
		printf("Difference: %d \n", num1 - num2);
	} else if (op == '*') {
		printf("Product: %d \n", num1 * num2);
	} else if (op == '/') {
		if (num2 !=0) 
			printf("Quotient: %d \n", num1 / num2);
		else 
			printf("Error: cannot divide by zero. \n");
	} else {
		printf("Error: Invalid operator '%c'.\n", op);
	}
	return 0;
}
