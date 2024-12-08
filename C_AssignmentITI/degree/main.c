#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree;
    printf("Enter your degree :");
    scanf("%d",&degree);
    if(degree >= 85)
    {
        printf("Excellent");
    }
    else if(degree >= 75)
     {
        printf("Very Good");
    }

    else if(degree >= 65)
    {
        printf("Good");
    }

    else if(degree >= 50)
    {
        printf("Acceptable");
    }
    else
        printf("Fail");

    return 0;
}
