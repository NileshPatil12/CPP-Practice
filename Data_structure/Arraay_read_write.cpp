#include<iostream>
using namespace std;
int main()
{
    int a[50],i,sum,n;
    cout<<"\nEnter the number of elements to enter :";
    cin>>n;
    cout<<"\nEnter the values : ";
    for(i=0;i<n;i++){
        cin>>a[i];
        
    }
    sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"\nArray entered : ";
    for(i=0;i<n;i++){
        cout<<"\na["<<i<<"]="<<a[i];
    }
    cout<<"\nsum of array ="<<sum;
    return 0;
}