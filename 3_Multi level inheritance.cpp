
#include <iostream>
using namespace std;
class grandparent
{
    public:
        void display_grandparent()
        {
            cout<<"This is grand parent class"<<endl;
        }
};
class parent:public grandparent
{
    public:
        void display_parent()
        {
            cout<<"This is parent class"<<endl;
        }
};
class child:public parent
{
    public:
        void display_child()
        {
            cout<<"This is child class"<<endl;
        }
};
int main()
{
    parent p1;
    cout<<"Iam accessing my parent class"<<endl;
    cout<<"-----------------------------"<<endl;
    p1.display_grandparent();
    p1.display_parent();
    child c1;
    cout<<endl;
    cout<<"Iam accessing my parent and grandparent class soo"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    c1.display_grandparent();
    c1.display_parent();
    c1.display_child();
}
