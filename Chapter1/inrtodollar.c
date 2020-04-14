#include <stdio.h>
#include <stdlib.h>

/* 1 $ = 70 RS ; 1/70 = val of 1RS in $ */

int main(void)
{
    float rs,dol;
    printf("Enter rupees:\n");
    scanf("%f",&rs);
    dol = ( rs / 70 );
    printf("You have %.4f dollars.\n",dol);
    return 0;
}