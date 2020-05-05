#include <stdio.h>

int main(void)
{
    int i, j, a, num;
    printf("Upto which number would you like the multiplication table :");
    scanf("%d",&num);
    for (j=1;j<=num;j++)
    {
        for (i=1;i<=10;i++)
        {
            a = j * i;
            printf("%dx%d=%d, ",j,i,a);
        }
        printf("\n");
    }
}