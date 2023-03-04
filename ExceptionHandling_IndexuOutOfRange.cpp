#include<iostream>
using namespace std;
int main()
{
    int b[5];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    try{
        b[10]=100;
        cout<<"Enter element at number 10: "<<b[10];
    }catch(int i){
        cout<<"Exception Occurs! array index out of range ";
    }
    return 0;
}