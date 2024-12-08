#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size];
    int i;

    for(i=0; i<size ;i++){
        printf("Enter Number %d :\n",i+1);
        scanf("%d",&arr[i]);
        _flushall();

    }
    for(i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }

    int sum=0;
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("The Summation of the array is %d \n",sum);

    int max =arr[0];
    for(i=1;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The Max of the array is %d \n",max);

    int min =arr[0];
    for(i=1;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("The Minimum of the array is %d \n",min);

    return 0;
}
