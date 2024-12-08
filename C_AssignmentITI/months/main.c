#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mon;
    printf("enter the month and and i will tell u  how many days is it");
    scanf("%d",&mon);
        switch(mon){
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10:
            case 12:
                printf(" 31 days");
                 break;

            case 2 :
                printf(" 28 or 29 days");
                 break;

            case 4 :
                printf(" 30 days");
                 break;

            case 6 :
                printf(" 30 days");
                 break;


            case 9 :
                printf(" 30 days");
                 break;


            case 11 :
                printf(" 30 days");
                 break;

            default :
                printf("you entered a wrong value");
                 break;
        }

    return 0;
}
