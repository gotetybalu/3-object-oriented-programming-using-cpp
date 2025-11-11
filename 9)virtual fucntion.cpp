#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"Base class"<<endl;
    }
};
class derived:public Base
{
    public:
    void display() override
    {
        cout<<"This is derived claas"<<endl;
    }
};
int main()
{
    Base* b1=new Base();
    Base* b2=new derived();
    b1->display();
    b2->display();
    
    delete b1;
    delete b2;
}
