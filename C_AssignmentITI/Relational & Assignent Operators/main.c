#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Relational Operators

    int x = 10;
    int y = 20;
    //Equal To
    printf("x == y: %d \n",x == y);
    //Not Equal To
    printf("x != y: %d \n",x != y);
    //Greater Than
    printf("x > y: %d \n",x > y);
    //Less Than
    printf("x < y: %d \n",x < y);
    //Greater Than Or Equal
    printf("x > y: %d \n",x >= y);
    //Less Than Or Equal
    printf("x < y: %d \n",x <= y);

    //Assignment Operators

    x+=2;
    printf("x+=2 = %d\n",x+=2);

    x-=2;
    printf("x-=2 = %d\n",x-=2);

    x*=2;
    printf("x*=2 = %d\n",x*=2);

    x/=2;
    printf("x/=2 = %d\n",x/=2);

    x%=2;
    printf("x%=2 = %d\n",x%=2);
    return 0;
}
