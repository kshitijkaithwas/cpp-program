#include <iostream>
using namespace std;

class Sum {
public:
    
    Sum(int a, int b) {
        cout << "Sum of integers " << a << " and " << b << " is: " << (a + b) << endl;
    }

    Sum(float a, float b) {
        cout << "Sum of floats " << a << " and " << b << " is: " << (a + b) << endl;
    }

    Sum(char a, char b) {
        cout << "Sum of characters '" << a << "' and '" << b << "' (ASCII values) is: " << (int(a) + int(b)) << endl;
    }
};

int main() {

    Sum intSum(9, 12);         
    Sum floatSum(7.3f, 13.8f); 
    Sum charSum('C', 'B');     

    return 0;
}
