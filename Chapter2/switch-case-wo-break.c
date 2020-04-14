#include <stdio.h>

int main(void){
	int severity;
	printf("Enter case severity: [1-4] ");
	scanf("%d",&severity);

	switch(severity){
		case 4: printf("Low\n");
		case 3: printf("Medium\n");
		case 2: printf("High\n");
		case 1: printf("Urgent\n");
		default: printf("Not a valid severity!\n");
	}

	return 0;
}