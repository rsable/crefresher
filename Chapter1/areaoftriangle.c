#include <stdio.h>

/* Calculates the area of a triangle
 */
int main(void){
    int height, base;
    float area;

    height = 12;
    base  = 21;
    area   = (base * height)/2 ;

    printf("The area is %f\n", area);
    return 0;
}