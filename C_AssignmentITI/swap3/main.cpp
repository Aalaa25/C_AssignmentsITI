#include <iostream>

using namespace std;

void swap (int& x, int& y){
int temp = x;
x=y;
y=temp;
}


int main()
{
    int a = 10;
    int b = 30;
    swap(a,b);
    cout << a << endl<< b;
    return 0;
}
