#include <stdio.h>

int main(void)
{
    int sum = 0, a = 0;
    float avg;
    for (int i=1;i<=10;i++)
    {
        printf("Enter number-%d : ",i);
        scanf("%d",&a);
        sum = sum + a;
    }
    avg=sum/10.0;
    printf("Sum of numbers is : %d \n",sum);
    printf("Average of numbers is : %.2f \n",avg);
}