#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, k;
    printf("Enter number of row: \n");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i==1||i==k||j==k||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}