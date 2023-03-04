#include<iostream>
using namespace std;
int main()
{
    int  n,i,m,num;
    cout<<"Numbers to check whether its prime or not: ";
    cout<<"\nEnter the number :";
    cin>>n;
    num=0;
    m=n/2;
    for(i=2;i<=m;i++){
        if(n%i==0){
            cout<<"Number is not prime "<<n;
            num=1;
            break;
        }
    }
    if(num==0){
        cout<<"\nnumber is  prime :"<<n;
    }
    
    return 0;
}
