#include <stdio.h>
#include <stdlib.h>
int scanArray(int arr[],int n);
int printArray(int arr[],int n);
int sumArray(int arr[],int n);


int main()
{
    int n;

    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n);
    sumArray(arr,n);
    return 0;
}

int scanArray(int arr[],int n){

    printf("Enter the elements :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

}

int printArray(int arr[],int n){

    printf("elements:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

}

int sumArray(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    printf("the summation is :%d",sum);
}
