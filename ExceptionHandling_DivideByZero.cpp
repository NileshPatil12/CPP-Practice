#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=7;
    float c;
    try{
        if(b==0){
            throw(1);
        }
        c=a/b;
        cout<<"\n Division is "<<c;
    }catch(int i){
        cout<<"\n Divide by zero error!... error number is "<<i;
    }
    cout<<"\n Rest of the program ";
    return 0;

}