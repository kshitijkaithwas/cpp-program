#include <iostream>
using namespace std;

class Base {
protected:
    int num1;  
    int num2;  

public:
    Base(int a, int b) : num1(a), num2(b) {}
};

class FirstDerived : public Base {
public:

    FirstDerived(int a, int b) : Base(a, b) {}

    void displayFirstNumber() {
        cout << "First number is: " << num1 << endl;
    }
};

class SecondDerived : public Base {
public:
    SecondDerived(int a, int b) : Base(a, b) {}

    void displaySecondNumber() {
        cout << "Second number is: " << num2 << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    FirstDerived firstDerivedObject(a, b);
    SecondDerived secondDerivedObject(a, b);

    firstDerivedObject.displayFirstNumber();
    secondDerivedObject.displaySecondNumber();

    return 0;
}