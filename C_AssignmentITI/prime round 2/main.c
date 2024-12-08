#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i , j;
    int prime;
    printf("enter a number:");
    scanf("%d",&number);


    for(j = 2;j<number;j++)
        {
           prime = 1;

                for(i=2;i<j;i++){
                    if (j % i == 0){
                        prime =0;
                    }
            }

         if (prime)
           printf("%d ,",i);

    }
    return 0;
}
