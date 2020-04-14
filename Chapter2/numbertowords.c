#include <stdio.h>
#include <stdlib.h>
/*
WAP that asks user to enter a digit and then you print the number in words.
*/
//TODO: Add stuff in this program to handle 3 digit numbers
//TODO: and single digit numbers
//TODO: If you're reading this and can fix it, please send a PR.

int main()
{
    int num, tens_place, ones_place;
    printf("enter a two digit number : ");
    scanf("%d", &num);

    if (num<10 || num > 99)
    {
        printf("You entered %d, which is not a 2 digit number\n",num);
        exit(EXIT_FAILURE);
    }

    tens_place = num / 10;
    ones_place = num % 10;

  //  printf("T = %d\tO = %d\n", tens_place, ones_place);

    printf("The number entered is ");
    if(tens_place==1){
        switch (ones_place){
        case 0:            printf("ten.");                break;
        case 1:            printf("eleven.");             break;
        case 2:            printf("twelve.");             break;
        case 3:            printf("thirteen.");           break;
        case 4:            printf("fourteen.");           break;
        case 5:            printf("fifteen.");            break;
        case 6:            printf("sixteen.");            break;
        case 7:            printf("seventeen");            break;
        case 8:            printf("eighteen");            break;
        case 9:            printf("nineteen");            break;
        }
    }
    else{
            switch (tens_place){
            case 2:                printf("twen");         break;
            case 3:                printf("thir");         break;
            case 4:                printf("for");          break;
            case 5:                printf("fif");          break;
            case 6:                printf("six");          break;
            case 7:                printf("seven");        break;
            case 8:                printf("eigh");         break;
            case 9:                printf("nine");         break;
            }

        printf("ty ");
        switch (ones_place){
            case 1: printf("one.");     break;
            case 2: printf("two.");     break;
            case 3: printf("three.");   break;
            case 4: printf("four.");    break;
            case 5: printf("five.");    break;
            case 6: printf("six.");     break;
            case 7: printf("seven.");   break;
            case 8: printf("eight.");   break;
            case 9: printf("nine.");    break;
        }
    }
printf("\n");
return EXIT_SUCCESS;
}
