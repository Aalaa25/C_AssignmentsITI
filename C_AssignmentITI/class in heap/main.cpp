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
    emp* ptr=new emp;
    ptr->setId(20);
    ptr->setAge(25);
    ptr->setName("aly");
    cout <<ptr->getId()<< endl <<ptr->getAge()<< endl <<ptr->getName();
    return 0;
}
