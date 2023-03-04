#include<iostream>
using namespace std;
template<class T>
void print(T a){
    cout<<"\n This function is with function template: "<<a;
}
void print(int a){
    cout<<"\n This function is ordinary function with int parameter "<<a;
}
int main(){
    print(100);
    print(200);
    print(100.200);
    print("Nilesh");
    //print(100,200);
    return 0;
}