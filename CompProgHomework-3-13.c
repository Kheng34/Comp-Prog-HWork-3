#include <stdio.h>

int i, totSecs;

int main() {
	printf("Please enter the total seconds: ");
	scanf("%d", &totSecs);
	for(i = 0; totSecs >= 3600;i++) {
		totSecs -= 3600;
	}
	printf("%d ", i);
	printf("Hours");
	for(i = 0; totSecs >= 60;i++) {
		totSecs -= 60;
	}
	printf(" %d ", i);
	printf("Minutes"); 
	printf(" %d ", totSecs);
	printf("Seconds");
	printf("\n");return 0;
}
