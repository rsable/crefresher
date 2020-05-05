#include <stdio.h>

int main(void)
{   
    int i, j;
    i = 5;
    j = ++i * 3 - 2;
    printf("%d\t%d\n",i,j);
}