#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    printf("Enter a 3 digit number\n");
    scanf("%d",&a);
    d=a%10;
    c=a/10;
    b=c%10;
    c=c/10;
    printf("%d%d%d \n",d,b,c);
}