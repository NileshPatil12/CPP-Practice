#include<iostream>
using namespace std;
class base
{
    public:
    int n1;
    void show(){
        cout<<"\n n1= "<<n1;
    }
};
class derive:public base
{
    public:
    int n2;
    void show()
    {
        cout<<"\n n1= "<<n1;
        cout<<"\n n2= "<<n2;

    }
};
int main()
{
    base b;
    base *ptr;
    cout<<"Pointer of base class points to it";
    ptr=&b;
    ptr->n1=20;
    ptr->show();
    derive d;
    cout<<endl;
    ptr=&d;
    ptr->n1=30;
    ptr->show();
    return 0;

}