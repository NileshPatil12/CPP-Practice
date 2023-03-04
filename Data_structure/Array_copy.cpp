#include<iostream>
using namespace std;
int main()
{
    int a[30],b[30],i,n;
    cout<<"\nEnter the no of elments : ";
    cin>>n;
    cout<<"\nEnter the values ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    cout<<"\n The copied array is : ";
    for(i=0;i<n;i++){
        cout<<"b["<<i<<"]= "<<b[i]<<endl;
    }
    return 0;
}