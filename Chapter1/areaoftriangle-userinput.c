#include <stdio.h>
#include <stdlib.h>

int main(void){
    int height, base;
    float area;
	printf("I calculate area of a triangle\n");
	printf("Enter the height: ");
	scanf("%d",&height);
	printf("Enter the width: ");
	scanf("%d",&base);
    area   = (base * height)/2 ;
    printf("The area is %f\n", area);
}