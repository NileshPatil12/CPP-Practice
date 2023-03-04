#include<iostream>
using namespace std;
void fun1 () throw (int)
{
    cout<<"\nThis is start of the fun1()";
    throw 232;
    cout<<"\nThis is the end of the fun1()";
}
void fun2() throw(int){
    cout<<"\nThis is the start of fun2()";
    fun1();
    cout<<"\nThis is the end of the fun2()";
}
void fun3() throw(int){
    cout<<"\n This the start of the fun3()";
    try{
        fun2();
    }
    catch(int a){
        cout<<"\nAn exception has been caught"<<a;
    }
    cout<<"\nThis is the end of the fun3()";
}

int main(){
    fun3();
    return 0;
}