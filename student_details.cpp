#include <iostream>
#include <string>
using namespace std;


class Student; 

void displayStudentDetails(const Student& student);

class Student {
private:
    string name;        
    int age;                 
    string department;  
    string course;      

public:
    Student(const string& n, int a, const string& dep, const string& c)
        : name(n), age(a), department(dep), course(c) {}

    friend void displayStudentDetails(const Student& student);
};

void displayStudentDetails(const Student& student) {
    cout << "Student Details:" << std::endl;
    cout << "Name: " << student.name << std::endl;
    cout << "Age: " << student.age << std::endl;
    cout << "Department: " << student.department << std::endl;
    cout << "Course: " << student.course << std::endl;
}

int main() {
    Student student("John", 20, "Computer Science", "Software Engineering");

    displayStudentDetails(student);

    return 0;
}