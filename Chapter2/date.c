#include <stdio.h>

int main(void)
{
    int dd, mm, yyyy;
    printf("Enter date in dd/mm/yyyy format : ");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    printf("The date is %d",dd);
    switch (dd)
    {
    case 1:
        printf("st ");
        break;
    case 21:
        printf("st ");
        break;
    case 31:
        printf("st ");
        break;
    case 2:
        printf("nd ");
        break;
    case 22:
        printf("nd ");
        break;
    case 3:
        printf("rd ");
        break;
    case 23:
        printf("rd ");
        break;
    default:
        printf("th ");
        break;
    }
    printf("of ");
    switch (mm)
    {
    case 1:
        printf("Jan %d\n",yyyy);
        break;
    case 2:
        printf("Feb %d\n",yyyy);
        break;
    case 3:
        printf("March %d\n",yyyy);
        break;
    case 4:
        printf("April %d\n",yyyy);
        break;
    case 5:
        printf("May %d\n",yyyy);
        break;
    case 6:
        printf("June %d\n",yyyy);
        break;
    case 7:
        printf("July %d\n",yyyy);
        break;
    case 8:
        printf("Aug %d\n",yyyy);
        break;
    case 9:
        printf("Sept %d\n",yyyy);
        break;
    case 10:
        printf("Oct %d\n",yyyy);
        break;
    case 11:
        printf("Nov %d\n",yyyy);
        break;
    case 12:
        printf("Dec %d\n",yyyy);
        break;
    default:
        break;
    }
}