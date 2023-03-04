#include<iostream>
using namespace std;

void and12(int a, int b){
    
    cout<<"a&b= "<<(a&b)<<endl;
}

void or12(int a,int b ){
    cout<<"a|b= "<<(a|b)<<endl;
}

void XOR12(int a,int b){
    cout<<"a^b= "<<(a^b)<<endl;
}
void comp(int a){
    cout<<"~a= "<<(~a)<<endl;
    cout<<"~a= "<<-(a+1)<<endl;
}

void rightShift(int a){
    while(a){
        cout<<"a>>1= "<<(a>>1)<<endl;
        a=a>>1;
    }
}

void leftShift(int a){
    while(a){
        cout<<"a<<= "<<(a<<1)<<endl;
        a=a<<1;
    }
}
int main()
{
    int a,b;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<"a= "<<a;
    cout<<"b= "<<b<<endl;
    and12(a,b);
    or12(a,b);
    XOR12(a,b);
    comp(a);
    rightShift(a);
    leftShift(a);
}