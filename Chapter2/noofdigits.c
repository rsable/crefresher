#include <stdio.h>

/* divide number by 10 till its >0 */

int main(void)
{
    int i, j;
    printf("Enter the num : \n");
    scanf("%d",&i);
    do
    {
        j++;
        i = ( i / 10 );
    }
    while( i != 0 );
    printf("Digits : %d \n",j);
}