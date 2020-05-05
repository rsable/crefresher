#include <stdio.h>

int main(void)
{
    int a = 0, num = 0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    for (int i=1;i<=num;i++)
    {
        a = a + i;
    }
    printf("The sum of the numbers is : %d \n",a);
}