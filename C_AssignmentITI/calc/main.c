#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1 , n2;
    char op;
    printf("enter the first number");
    scanf("%d",&n1);
    printf("enter the second number");
    scanf("%d",&n2);
    _flushall();
    printf("enter the operator");
    scanf("%c",&op);

    switch(op) {
       case '+' :
         printf("the summation is %d + %d = %d",n1 + n2);
         break;

       case '-' :
         printf("the subtraction is %d - %d = %d",n1 - n2);
         break;

       case '*' :
         printf("the multiplication is %d * %d = %d",n1 * n2);
         break;

       case '/' :
         printf("the devision is %d / %d = %d",n1 / n2);
         break;

       case '%' :
         printf("the summation is %d % %d = %d",n1 % n2);
         break;

       default :
         printf("you entered a wrong operator , please try again");
         break;
}
    return 0;
}
