
#include <iostream>
using namespace std;
class mother
{
    public:
        void display_mother()
        {
            cout<<"This is mother class"<<endl;
        }
};
class father
{
    public:
        void display_father()
        {
            cout<<"This is father class"<<endl;
        }
};
class child:public mother,public father
{
    public:
        void display_child()
        {
            cout<<"I have right to access mother class and father class"<<endl;
            cout<<"This is child class"<<endl;
        }
};
int main()
{
  
    child c1;
    cout<<"-------------------------------------------------"<<endl;
    c1.display_father();
    c1.display_mother();
    c1.display_child();
}
