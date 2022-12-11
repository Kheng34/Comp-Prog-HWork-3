#include <stdio.h>

int a, b, c, result;

int main() {
	printf("Please enter first number: ");
	scanf("%d", &a);
	printf("Please enter second number: ");
	scanf("%d", &b);
	printf("Please enter third number: ");
	scanf("%d", &c);
	result = (a * a * a) + (b * b) - c;
	printf("Result: %d", result);
	printf("\n");return 0;
}
