#include <stdio.h>

int main(void)
{
    int a = 0;
    for (int i=1;i<=10;i++)
    {
        a = a + i;
    }
    printf("The sum of first 10 natural numbers is : %d \n",a);
}