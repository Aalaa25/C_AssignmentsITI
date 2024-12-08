#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int column, int line) {
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

int main() {
    char menu[3][10] = {"new", "display", "exit"};
    char subMenu[3][10] = {"edit", "submit", "delete"};
    int i, n = 0, h = 0;
    char ch;
    int flag = 0;
    int inSubMenu = 0;

    while (flag == 0) {
        for (i = 0; i < 3; i++) {
            gotoxy(10, i + 10);
            if (i == n)
                textattr(0x04);
            _cprintf("%s", menu[i]);
            textattr(0x07);
        }

        for (i = 0; i < 3; i++) {
            gotoxy(20, i + 10);
            if (i == h)
                textattr(0x05);
            _cprintf("%s", subMenu[i]);
            textattr(0x07);
        }

        ch = _getch();

        switch (ch) {
        case -32:
            ch = _getch();
            switch (ch) {
                case 72: //up
                    if (!inSubMenu) {
                        n--;
                        if (n < 0)
                            n = 2;
                    } else {
                        h--;
                        if (h < 0)
                            h = 2;
                    }
                    break;
                case 80: //down
                    if (!inSubMenu) {
                        n++;
                        if (n > 2)
                            n = 0;
                    } else {
                        h++;
                        if (h > 2)
                            h = 0;
                    }
                    break;
                case 75: //left
                    if (inSubMenu) {
                        inSubMenu = 0;
                        h = 0;
                    }
                    break;
                case 77: //right
                    if (!inSubMenu) {
                        inSubMenu = 1;
                        h = 0;
                    }
                    break;
            }
            break;

        case 13:
            if (n == 2) {
                flag = 1;
            }
             else {
                inSubMenu = 1;
                h = 0;
            }
            break;

        case 27:
            flag = 1;
            break;
        }
    }

    return 0;
}
