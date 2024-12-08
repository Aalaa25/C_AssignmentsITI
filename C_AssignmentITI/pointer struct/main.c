#include <stdio.h>
#include <stdlib.h>

struct emp{
    int id;
};
struct emp e1;
struct emp* ptr = &e1;
int main()
{
        printf("enter the employee id ");
        scanf("%d",&(ptr->id));


        printf("the address is : %p \n", &(ptr->id));
        //
        printf("the id is : %d ", ptr->id);

    return 0;
}
