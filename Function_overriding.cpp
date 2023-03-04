#include<iostream>
using namespace std;
class base
{
    public:
    virtual void print(){
        cout<<"Print base class"<<endl;

    }
    void show(){
        cout<<"Print base class "<<endl;
    }
};
class derived : public base{
    public:
    virtual void print()
    {
        cout<<"Print by derive class"<<endl;
    }
    void show (){
        cout<<"Show derived class ";

    }
};
int main(){
    base *bptr;
    derived d;
    bptr=&d;
    /*virtual function binded at runtime 
    #non-virtual function binded at compile time*/
    bptr->print();
    bptr->show();
    return 0;

}