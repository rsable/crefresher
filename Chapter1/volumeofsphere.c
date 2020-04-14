#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* V=[4/3(3.14*r*r*r)] */


int main(void)
{
    int rad;
    float vol;
    printf("Enter the radius: ");
    scanf("%d",&rad);
    vol=((M_PI * rad * rad * rad) * 4/3);
    printf("The volume of sphere is %.2f :\n", vol);
    return 0;
}

/* https://www.calculatorsoup.com/calculators/geometry-solids/sphere.php */