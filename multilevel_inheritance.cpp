#include <iostream>
using namespace std;


class Base {
protected:
    int num1; 

public:
    Base(int a) : num1(a) {}
};

class FirstDerived : public Base {
protected:
    int num2; 

public:
    FirstDerived(int a, int b) : Base(a), num2(b) {}
};

class SecondDerived : public FirstDerived {
public:

    SecondDerived(int a, int b) : FirstDerived(a, b) {}

    void calculateSum() {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    SecondDerived secondDerivedObject(a, b);

    secondDerivedObject.calculateSum();

    return 0;
}