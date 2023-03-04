#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter the Number -";
    cin>>c;
    bool isPrime=1;
    for(int i=2;i<c;i++){
        if(c % i == 0){
            cout<<"NUmber is not a prime"<<endl;
            isPrime=0;
            break;
        }
        else{
            continue;
        }
    }
    if(isPrime){
        cout<<"Prime number is it";
    }
}