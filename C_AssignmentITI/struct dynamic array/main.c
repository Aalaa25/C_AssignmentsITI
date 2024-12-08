#include <stdio.h>
#include <stdlib.h>

struct emp{
int id;
int name[30];
int age;
};

int main()
{
 int i,size;
    printf("Enter The Size : ");
    scanf("%d",&size);
    struct emp* ptr =(struct emp*) malloc(size*sizeof(struct emp));
    if(ptr != NULL){
        for(int i=0;i<size;i++){
            printf("Enter The %d : ",i+1);
            scanf("%d",&ptr[i].id);
            scanf("%s",ptr[i].name);
            scanf("%d",&ptr[i].age);
        }
        for(int i=0;i<size;i++){
            printf("Your [%d] data is : %d : %s : %d \n",i+1,ptr[i].id,ptr[i].name,ptr[i].age);
        }
        free(ptr);
    }
    return 0;
}
