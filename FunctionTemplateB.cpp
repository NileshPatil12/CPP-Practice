#include<iostream>
using namespace std;
template<typename T>
void exchange(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10,b=20;
    float c=10.20,d=20.30;
    cout<<"\nExample of function template";
    cout<<"\nInteger exchange of value";
    cout<<"\nBefore exchange of value a and b is "<<a<<" and "<<b;
    exchange<int>(a,b);
    cout<<"\nAfter the exchange of value a and b is "<<a<<" and "<<b;

    cout<<"\nExample of function template";
    cout<<"\nInteger exchange of value";
    cout<<"\nBefore exchange of value c and d is "<<c<<" and "<<d;
    exchange<float>(c,d);
    cout<<"\nAfter the exchange of value a and b is "<<c<<" and "<<d;


}