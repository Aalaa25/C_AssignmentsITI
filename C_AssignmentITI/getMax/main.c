#include <stdio.h>
#include <stdlib.h>

int getMax();

int main()
{
    int x,y;

    getMax(x,y);
    return 0;
}

int getMax(int x , int y){
    int z;
    printf("Enter first number :");
    scanf("%d",&x);
    printf("Enter second number :");
    scanf("%d",&y);


    if(x>y){
        printf("The greater is : %d",x);
        return x;
    }
    else{
        printf("The greater is : %d",y);
        return y;
    }
}
