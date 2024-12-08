#include <stdio.h>
#include <stdlib.h>
#define size 3

struct emp{
    int id;
    char name[30];
    int age;
};

struct emp emp[size];


int main()
{
    for(int i=0;i<size;i++){
            printf("Enter Employee %d id , name , age : ",i+1);
            scanf("%d",&emp[i].id);
            scanf("%s",&emp[i].name);
            scanf("%d",&emp[i].age);

    }
    printf("Your Data is :");
    for(int i=0;i<size;i++){
        printf("%d ",emp[i].id);
        printf("%s ",emp[i].name);
        printf("%d \n",emp[i].age);
    }
    return 0;
}
