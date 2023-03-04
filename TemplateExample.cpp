#include<iostream>
using namespace std;
template<typename T>
void add(T a,T b){
    cout<<"Addition of two numbers is "<<a+b<<endl;
}
template<typename T>
void sub(T a,T b){
    cout<<"Subtraction of two numbers is "<<a-b<<endl;
}
template<typename T>
void mult(T a,T b){
    cout<<"Multiplication of two numbers is "<<a*b<<endl;
}
template<typename T>
void div(T a,T b){
    cout<<"Division of two numbers is "<<a/b<<endl;
}

int main()
{
    add<float>(30.4,20.3);
    add<int>(30,20);
    add<char>('n','v');
    return 0;
}