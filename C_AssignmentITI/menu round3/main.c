#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void gotoxy (int column , int line) {
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

struct emp{
    int id;
    int name[30];
    int age;
};

int main()
{
    char names[5][50] = {"new", "display all" ,"display by name" ,"display by id" , "exit"};
    int i,j,size,newSize ,idsearch;
    int flag = 0;
    int n = 0;
    char ch;
    char namesearch[50];
    printf("Enter The Size : ");
    scanf("%d",&size);
    struct emp* ptr = (struct emp*) malloc(size * sizeof(struct emp));

    if (ptr != NULL) {
        for (int i = 0; i < size; i++) {
            printf("Enter The %d : ", i + 1);
            scanf("%d", &ptr[i].id);
            scanf("%s", ptr[i].name);
            scanf("%d", &ptr[i].age);
        }
    }

    do {
        system("cls");

        for (j = 0; j < 5; j++) {
            gotoxy(10, j + 10);
            if (j == n)
                textattr(0x04);
            _cprintf("%s", names[j]);
            textattr(0x07);
        }

        ch = _getch();
        switch (ch) {
            case -32:
                ch = _getch();
                switch (ch) {
                    case 72:
                        n--;
                        if (n < 0)
                            n = 4;
                        break;
                    case 80:
                        n++;
                        if (n > 4)
                            n = 0;
                        break;
                }
                break;
            case 13:
                system("cls");
                if (n == 0) {
                    for (int i = 0; i < size; i++) {
                            printf("Enter The Size : ");
                            scanf("%d",&newSize);
                       for(i=0;i<newSize;i++){
                              printf("Enter new data [%d] : ", i + 1);
                              scanf("%d", &ptr[i].id);
                              scanf("%s", ptr[i].name);
                              scanf("%d", &ptr[i].age);
                              }
                        for(int i=0;i<newSize;i++){
                           printf("Your [%d] data is : %d : %s : %d \n",i+1,ptr[i].id,ptr[i].name,ptr[i].age);
        }
        }

                } else if (n == 1) {
                    for (int i = 0; i < size; i++) {
                        printf("Your [%d] data is : %d : %s : %d \n", i + 1, ptr[i].id, ptr[i].name, ptr[i].age);
                    }
                } else if (n == 2) {
                    printf("enter a name");
                    scanf("%s",namesearch);

                    for(int j=0;j<size;j++){

                    if (strcmp(namesearch, ptr[j].name) == 0){

                        printf("Your data is : %d : %s : %d \n", ptr[j].id, ptr[j].name, ptr[j].age);
                    }
                    else{
                        printf("name not found");
                    }
                    flag = 1;
                }}
                else if (n == 3) {
                    printf("enter a id");
                    scanf("%d",&idsearch);
                    for(int z=0;z<size;z++){
                    if (idsearch == ptr[z].id){
                        printf("Your data is : %d : %s : %d \n", ptr[z].id, ptr[z].name, ptr[z].age);
                    }
                    else{
                        printf("id not found");
                    }
                    flag = 1;
                }}
                else if ( n == 4) {
                    printf("exit item selected");
                    flag = 1;
                }
                _getch();
                break;
            case 27:
                flag = 1;
                break;
        }
    } while (flag == 0);

    free(ptr);
    return 0;
}
