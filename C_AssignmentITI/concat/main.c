#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[10]="Alaa";
    char lname[10]="khaled";
    char fullname[20];
    strcpy(fullname,fname);
    strcat(fullname , " ");
    strcat(fullname , lname);
    printf("%s",fullname);
    return 0;
}
