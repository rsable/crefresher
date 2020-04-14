#include <stdio.h>

int main(void)
{
    int i, n, large = 0, small = 0, num;
    printf ("Enter total number of entries : \n");
    scanf ("%d", &num);
    printf ("Enter number \n");
    scanf ("%d", &n);
    large = n;
    small =n;
    for (i=1; i<= num -1 ; i++)
    {
        printf ("Enter number \n");
        scanf ("%d",&n);
        if (n>large)
        large=n;
        if (n<small)
        small=n;
    }
    printf ("The largest number is %d \n", large);
    printf ("The smallest number is %d \n", small);
    return 0;
}