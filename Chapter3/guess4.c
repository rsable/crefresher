#include <stdio.h>

int main(void)
{   
    int i, j;
    i = 7;
    j = 3 + --i * 2;
    printf("%d\t%d\n",i,j);
}