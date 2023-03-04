#include<bits/stdc++.h>
using namespace std;
class funcover 
{
    public:
    void func(int x){
        cout<<"The avlue of x is "<<x<<endl;
    }
    void func(char x){
        cout<<"The value of x is "<<x<<endl;
    }
    void func(double x)
    {
        cout<<"The value of x is "<<x<<endl;
    }
    void func(int x,int c){
        cout<<"The value of x is"<<x<<"and second value is "<<c<<endl;
    }
};
int main()
{
    funcover a;
    a.func(12);
    a.func(10,20);
    a.func('N');
    a.func(9.1234);
}
