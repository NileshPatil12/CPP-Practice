#include<iostream>
using namespace std;
template<class T,class U>
class A
{
    T x;
    U y;
    
};

int main()
{
    A<char,char>a;
    A<int,int >b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    return 0;
    
}