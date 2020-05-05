#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0, i;
    printf("Enter the term : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        printf("%d ",2*i-1);
        sum=sum+(2*i-1);
    }
    printf("\nThe sum of the number is : %d \n",sum);
}