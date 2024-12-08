#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[5];
    int *ptrarr = arr; //&arr[0]
    int i =0;
    for(i=0;i<5;i++){
        scanf("%d",arr+i);
    }
    for(i=0;i<5;i++){
        printf(" \n %d:%p ",arr[i],arr+i); //,*(ptrarr+i),ptrarr[i]
    }
    return 0;

    /*int x = 5;
    int y = &x;
    int *ptrx = x;
     *ptrx = x;
    printf("%d \n",x);
    printf("%p \n",&x);
    printf("%d \n",y);
    printf("%p \n",*ptrx); //runtime error because he points to address 5
    printf("%d \n",*ptrx);*/
}
