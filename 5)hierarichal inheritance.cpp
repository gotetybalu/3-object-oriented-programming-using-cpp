
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
class child1:public parent
{
    public:
        void display_child1()
        {
            cout<<"This is child1 class"<<endl;
        }
};
class child2:public parent
{
    public:
        void display_child2()
        {
            cout<<"This is child2 class"<<endl;
        }
};
int main()
{
  
    child1 c1;
    child2 c2;
    cout<<"-------------------------------------------------"<<endl;
    c1.display_parent();
    c1.display_child1();
    c2.display_parent();
    c2.display_child2();
}
