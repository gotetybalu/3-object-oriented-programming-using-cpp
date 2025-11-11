
#include <iostream>
using namespace std;
class parent
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
    child c;
    c.display_parent();
    c.display_child();
}
