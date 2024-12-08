#include <stdio.h>
#include <stdlib.h>

struct complex {
    int real , imaginary;
};
 struct complex com;
int main()
{
    printf("Here is the complex number..\n");
    printf("Enter the Real Part : ");
    scanf("%d",&com.real);
    printf("Enter the Imaginary Part : ");
    scanf("%d",&com.imaginary);

    printf("The Complex Number is : %d + %di",com.real ,com.imaginary);

    return 0;
}
