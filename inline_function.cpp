#include <iostream>
using namespace std;

class Student {
public:
    inline void displaySum(int a, int b) {
        cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }
};

int main() {
    Student student;

    student.displaySum(9, 17);

    return 0;
}
