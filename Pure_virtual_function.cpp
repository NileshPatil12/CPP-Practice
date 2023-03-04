#include<iostream>
using namespace std;
class base 
{
    public:
    virtual void display()=0;
};
class derive1 : public base
{
    public:
    void display(){
        cout<<"\n This is first derived class";
    }
};
class derive2 : public base
{
    public:
    void display()
    {
        cout<<"\n This is second drived class";
    }
};

int main(){
    base * b;
    derive1 d1;
    derive2 d2;
    b=&d1;
    b->display();
    b=&d2;
    b->display();
    return 0;
}