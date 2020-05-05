#include <stdio.h>

int main(void)
{
    int a = 0,b = 0;
    printf("I will determine the largest number in the given sequence.\nAll the negative numbers will be discarded.\nEnter 0 to exit.\n");
    do {
    printf("enter a number :");
    scanf("%d",&a);
        if ( a > 0 && a > b )
            {
                b=a;
            }
    } while ( a != 0 );
    printf("The largest number is %d \n",b);
}