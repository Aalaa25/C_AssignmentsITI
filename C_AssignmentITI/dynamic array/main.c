#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,size;
    printf("Enter The Size : ");
    scanf("%d",&size);
    int* ptr =(int*) malloc(size*sizeof(int));
    if(ptr != NULL){
        for(int i=0;i<size;i++){
            printf("Enter The %d : ",i+1);
            scanf("%d",&ptr[i]);
        }
        for(int i=0;i<size;i++){
            printf(" \n ptr[%d] = %d",i,ptr[i]);
        }
        free(ptr);
    }
    return 0;
}
