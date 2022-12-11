#include <stdio.h>

float basePrice, vatAddedPrice;

int main() {
	printf("Please enter the base price: ");
	scanf("%f", &basePrice);
	vatAddedPrice = basePrice * 118 / 100;
	printf("VAT added price: %f", vatAddedPrice);
	printf("\n");return 0;
}
