#include <stdio.h>

int main(void)
{
    int i,j,k=1,num;
    printf("Enter the number of rows : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}