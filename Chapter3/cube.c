#include <stdio.h>

int main(void)
{
    int a = 0,b = 0,i = 1;
    printf("Enter the number :\n");
    scanf("%d",&a);
    while (i <= a)
    {
        b = i * i * i;
        printf("%d \n",b);
        i++; 
    }
}