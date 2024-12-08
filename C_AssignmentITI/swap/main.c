#include <stdio.h>
#include <stdlib.h>

int swap(int* x , int* y);

int main()
{
    int x , y;
    swap(&x,&y);
    return 0;
}

int swap(int* x , int* y){
    printf("Enter the first number :");
    scanf("%d",x);
    printf("Enter the second number :");
    scanf("%d",y);
    int temp =*x;
    *x=*y;
    *y=temp;

    printf(" x = %d ,y =% d",*x , *y);
}

