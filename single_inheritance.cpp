#include <iostream>
using namespace std;

class Base {
protected:
    int num1;  
    int num2;  

public:
    
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived : public Base {
public:
    
    Derived(int a, int b) : Base(a, b) {}

    
    void calculateProduct() {
        int product = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is: " << product << std::endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Derived derivedObject(a, b);

    derivedObject.calculateProduct();

    return 0;
}