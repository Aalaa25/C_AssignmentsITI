#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter a number");
    int sum = 0;
    for(int i=0;i<5;i++){
        scanf("%d",&x);
            sum += x;
    }
        printf("the summation = %d \n", sum);


    return 0;
}
