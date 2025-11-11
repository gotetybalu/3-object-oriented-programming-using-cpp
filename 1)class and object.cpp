
#include <iostream>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        void display()
        {
            cout<<"student name is "<<name<<endl;
            cout<<"Roll number"<<roll<<endl;
        }
};

int main()
{
    student s1;
    s1.name="Ram";
    s1.roll=123;
    s1.display();
}
