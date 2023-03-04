#include<iostream>
using namespace std;
int main()
{
    int a[30],x,n,i;
    cout<<"\nEnter no of elements ";
    cin>>n;
    cout<<"\nEnter the values ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number to be searched : ";
    cin>>x;
    for(i=0;i<n && x!=a[i];i++){}
    if(i<n){
        cout<<"\nElement is found and position  is "<<i+1;
    }
    else{
        cout<<"\nElement is not found ";
    }
}