#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int itime = 0, mins = 0, otime = 0;
    printf("Enter the time in 24 hr format :\n");
    scanf("%d",&itime);
    mins = itime % 100 ;
    if ( mins >= 60 )
    {
        printf("Invalid time.\n");
        exit(EXIT_SUCCESS);
    }
    itime = itime / 100 ;
    if (itime == 12)
    {
        printf("The time is 12:%.2d PM\n",mins);
        exit(EXIT_SUCCESS);
    }
    if (itime == 24)
    {
        printf("The time is 12:%.2d AM\n",mins);
        exit(EXIT_SUCCESS);
    }
    otime = ( itime % 12 ) > 12 ? itime : ( itime % 12 );
    ( otime == itime ) ? printf("The time is %d:%.2d AM\n",otime,mins) : printf("The time is %d:%.2d PM\n",otime,mins);
}