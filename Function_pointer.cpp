#include<iostream>
using namespace std;
typedef void(*ptr)();
void disp(){
    cout<<"\n This function is called using function pointer ";
}
void print(){
    cout<<"\n This is another function called using function pointer";

}
int main(){
    ptr p;
    p=&disp;
    p();
    p=&print;
    p();
    return 0;    
}