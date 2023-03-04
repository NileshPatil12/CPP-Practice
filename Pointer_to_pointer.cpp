#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    int **pp;
    a=100;
    p=&a;
    pp=&p;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of *p is "<<*p<<endl;
    cout<<"Value of **pp is "<<**pp;
    return 0;
}