#include <stdio.h>

int main(void)
{
    int num;
    printf("Tell me a number not between 10-20 : \n");
    scanf("%d",&num);
    if( (num < 10) || ( num >= 10 && num > 20 ) )
        {
            printf("Number %d is not in range 10 and 20\n",num);
            return 0;
        }
    else
        {
            printf("bye\n");
            return 0;
        }
}