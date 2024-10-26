#include <iostream>

class Array {
private:
    int* arr;      
    int size;      

public:
    // Constructor
    Array(int s) : size(s) {
        arr = new int[size];
        std::cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }

    // Copy Constructor
    Array(const Array& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    
    int sumPositive() const {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    
    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    Array originalArray(n);

    Array copiedArray = originalArray;

    int sum = copiedArray.sumPositive();
    std::cout << "Sum of all positive numbers: " << sum << std::endl;

    return 0;
}