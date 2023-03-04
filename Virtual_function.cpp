#include<iostream>
using namespace std;
class base
{
    public:
    virtual void print(){
        cout<<"print base class"<<endl;
    }
    void show(){
        cout<<"show base class"<<endl;
    }
};
class derive : public base
{
    public:
    void print(){
        cout<<"print derive class"<<endl;

    }
    void show(){
        cout<<"print derive class "<<endl;
    }
};
int main(){
    base* ptr;
    derive d;
    ptr=&d;
    //virtual function binded at runtime
    ptr->print();
    //Non-virtual function binded at runtime
    ptr->show();
    return 0;
}