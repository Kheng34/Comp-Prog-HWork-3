#include <stdio.h>

int edgeS, edgeL, perimeter, area;

int main() {
	printf("Please enter long edge: ");
	scanf("%d", &edgeL);
	printf("Please enter short edge: ");
	scanf("%d", &edgeS);
	perimeter = 2 * (edgeS + edgeL);
	area = edgeS * edgeL;
	printf("Perimeter: %d", perimeter);
	printf("\nArea: %d", area);
	printf("\n");return 0;
}
