#include <iostream>
using namespace std;

class PrimeChecker; 

class Number {
private:
    int num; 

public:
    Number(int n) : num(n) {}

    friend class PrimeChecker;
};

class PrimeChecker {
public:

    void checkPrime(Number& number) {
        int n = number.num;
        if (n <= 1) {
            cout << n << " is not a prime number." << endl;
            return;
        }

        bool isPrime = true;
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    Number number(num);

    PrimeChecker primeChecker;

    primeChecker.checkPrime(number);

    return 0;
}