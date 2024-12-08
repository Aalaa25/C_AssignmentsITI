#include <stdio.h>
#include <stdlib.h>

void gotoxy (int column , int line) {
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}


int main()
{
    char ch;
    do{

    system("cls");
    printf("new\ndisplay\nexit");
    _flushall();
    scanf("%c",&ch);
    switch(ch){
    case 'n' :
        printf("new item selected");
        break;
    case 'd' :
        printf("display item selected");
        break;
    case 'e' :
        printf("exit item selected");
        break;
    default :
        printf("wrong item selected");
    }
    _flushall();
    scanf("%c",&ch);
    } while (ch != 'e');

    return 0;
}
