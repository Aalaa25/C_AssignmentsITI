#include <iostream>
#include <string.h>
using namespace std;

class emp {
int id;

char name[30];

int age;

public:
    int getId(){
        return id;
    }
    void setId(int _id){
        id = _id;
    }

    char* getName(){
        return name;
    }
    void setName(char* _name){
        if (strlen(_name)>=3)
            strcpy(name , _name);
        else
            cout << "invalid name";
    }

    int getAge(){
        return age;
    }
    void setAge(int _age){
        if(_age>=0 && _age <=90)
           age = _age;
           else
            cout<<"invalid age number";
    }

};

int main()
{
    emp e1;
    e1.setId(10);
    e1.setAge(30);
    e1.setName("sara");
    cout <<e1.getId()<< endl <<e1.getAge()<< endl <<e1.getName();
    return 0;
}
