#include <stdio.h>

int main(void)
{
    int i, a, num;
    printf("For which number would you like the multiplication table :");
    scanf("%d",&num);
    for (i=1;i<=10;i++)
    {
        a = num * i;
        printf("%d x %d = %d \n",num,i,a);
    }
}