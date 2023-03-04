#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void show()=0;

};
class Derive:public Base{
    public:
    void show()
    {
        cout<<"This is implementation from the derived class";
    }
};
int main()
{
    //Base obj;
    Base *b;
    Derive d;
    b=&d;
    b->show();
    return 0;
}