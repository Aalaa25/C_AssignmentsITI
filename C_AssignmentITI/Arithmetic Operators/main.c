#include <stdio.h>
#include <stdlib.h>

int main()
{
    //The Arithmetic Operators in C language for integers

    // SUM(+)
    int x;
    int y;
    int z;
    printf("The Summation of 3 values. \n");
    printf("Enter the first number please..\n");
    scanf("%d",&x);
    printf("Enter the second number please..\n");
    scanf("%d",&y);
    printf("Enter the third number please..\n");
    scanf("%d",&z);
    int sum = x + y + z;
    printf("The Summation of this three values = %d + %d + %d = %d \n", x , y , z,sum);

    //Subtraction(-)
    int subtraction = x - y - z;
    printf("The Subtraction of this tree values = %d - %d - %d = %d \n", x , y , z ,subtraction);

    //Multiplication(*)
    int multiplication = x * y * z;
    printf("The Multiplication of this three values = %d * %d * %d = %d \n", x , y , z, multiplication);

    //Devision(/)
    int devision = x / y / z;
    printf("The Devision of this three values = %d / %d / %d = %d \n", x , y , z , devision);


    //Modulus(%)
    int modulus = x % y %z;
    printf("The Modulus of this three values = %d %% %d %% %d = %d \n", x , y , z , modulus);

    //Equal to(==)

    return 0;
}
