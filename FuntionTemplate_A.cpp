#include<iostream>
using namespace std;
template<typename T>
void MAX(T a,T b){
    if(a>b){
        cout<<"First number is greater than second "<<endl;
    }
    else{
        cout<<"Second number is greater than first"<<endl;
    }
}
int main(){
    cout<<"Example of function template\n";
    cout<<"Integer Comparision of two numbers\n";
    MAX<int>(110,105);
    cout<<"\nFloating comparision of two numbers\n";
    MAX<float>(10.22,10.21);
    return 0;
}