#include <iostream>
#include <string>
using namespace std;

class Complex {
    int real;
    int imaginary;
    string operation;

public:
    int getReal() const {
        return real;
    }

    void setReal(int _real) {
        real = _real;
    }

    int getImaginary() const {
        return imaginary;
    }

    void setImaginary(int _imaginary) {
        imaginary = _imaginary;
    }

    string getOperation() const {
        return operation;
    }

    void setOperation(const string& _operation) {
        operation = _operation;
    }
};

Complex cp;

void complexFunction() {
    int x, y;
    string op;

    cout << "Enter real part: ";
    cin >> x;
    cp.setReal(x);

    cout << "Enter imaginary part: ";
    cin >> y;
    cp.setImaginary(y);

    cout << "Enter operator: ";
    cin >> op;
    cp.setOperation(op);

    cout << cp.getReal() << " " << cp.getOperation() << " " << cp.getImaginary() << "i" << endl;
}

int main() {
    cp.setReal(3);
    cp.setImaginary(5);
    cp.setOperation("+");
    cout << cp.getReal() << " " << cp.getOperation() << " " << cp.getImaginary() << "i" << endl;

    complexFunction();
    return 0;
}
