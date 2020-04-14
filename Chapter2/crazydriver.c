#include <stdio.h>

int main(void)
{
    int speed = 0;
    printf("Enter the speed : \n");
    scanf("%d",&speed);
    switch (speed)
    {
    case 1 ... 10: case 11 ... 20: case 21 ... 30: case 31 ... 40: case 41 ... 50: case 51 ... 60:
        printf("not crazy.\n");
        break;
    case 61 ... 70:
        printf("crazy.\n");
        break;
    case 71 ... 80:
        printf("crazzy.\n");
        break;
    case 81 ... 90:
        printf("CrAZzY.\n");
        break;
    case 91 ... 100:
        printf("fast and furious.\n");
        break;
    default:
        printf("cops cant touch me.\n");
        break;
    }
    return 0;
}