A constructor is a special member function in C++ (or other object-oriented languages) that is automatically called when an object of a class is created.

Key features of a constructor:
-------------------------
Same name as the class.
No return type (not even void).
Can be overloaded.
Used to initialize objects (set default values, allocate resources, etc.).

Why Constructors Exist?    
Problem: If you forget to set a member variable, it might contain garbage values.
A constructor exists to automatically initialize objects when they are created. Without constructors, we would have to manually initialize every object, which is error-prone and inefficient.


#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Ram", 20);  // Constructor automatically called
    s1.display();

    return 0;
}
