#include <stdio.h>
#include <stdlib.h>
int factorial();



int main()
{
    int x;
    factorial(x);

    return 0;
}

int factorial (int x){
    printf("enter a number");
    scanf("%d",&x);
    int fac =1;
    if(x < 0){
        printf("you entered a wrong value");
    }
    else{
        for(int i=1;i<=x;i++){
            fac *= i;
        }
        printf("The factorial is : %d",fac);
    }
}
