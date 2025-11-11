1️⃣ What is a Copy Constructor?
----------------------------------
    A copy constructor is a special constructor in C++ that is used to initialize a new object as a copy of an existing object.

Key points:
    1)Its parameter is a reference to the same class type.
    2)Usually declared as: ClassName(const ClassName &obj);

#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }
    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1("Balu", 20);   // Normal constructor called
    Student s2 = s1;            // Copy constructor called

    s1.display();
    s2.display();
}
