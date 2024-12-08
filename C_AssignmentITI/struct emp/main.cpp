#include <iostream>

using namespace std;

struct emp{
int id;
char name[30];
int age;
};

int main()
{
    emp e1={10,"sara",30};
    cout << e1.id << ":"<<e1.name<<":"<<e1.age;
    return 0;
}
