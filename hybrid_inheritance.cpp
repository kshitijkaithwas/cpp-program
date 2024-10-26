#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of Class A" << endl;
    }

    void displayA() {
        cout << "This is class A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of Class B" << endl;
    }

    void displayB() {
        cout << "This is class B" << endl;
    }
};

class C : public A {
public:
    C() {
        cout << "Constructor of Class C" << endl;
    }

    void displayC() {
        cout << "This is class C" << endl;
    }
};

class D : public A {
public:
    D() {
        cout << "Constructor of Class D" << endl;
    }

    void displayD() {
        cout << "This is class D" << endl;
    }
};

class E : public B {
public:
    E() {
        cout << "Constructor of Class E" << endl;
    }

    void displayE() {
        cout << "This is class E" << endl;
    }
};

int main() {
    E objE;

    objE.displayA();  
    objE.displayB();  
    objE.displayE();  

    return 0;
}
