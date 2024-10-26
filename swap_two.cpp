#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b; 
public:
    SwapNumbers(int x, int y) : a(x), b(y) {}

    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() const {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    SwapNumbers swapObj(num1, num2);

    cout << "Before swapping: ";
    swapObj.display();

    swapObj.swap();

    cout << "After swapping: ";
    swapObj.display();

    return 0;
}