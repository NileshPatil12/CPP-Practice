#include<iostream>
using namespace std;
template<typename T>
void MAX(T a[],int n){
    T m;
    m=a[0];
    for(int i=0;i<n;i++){
        if(m<a[i]){
            m=a[i];
        }
    }
    cout<<"The largest Number is "<<m<<endl;
}
int main()
{
    int n,i;
    int a[10];
    cout<<"\nFinding the largest number from int ";
    cout<<"\nHow many elements want to enter :";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    MAX<int>(a,n);

    float b[10];
    cout<<"\nFinding the largest number from float ";
    cout<<"\nHow many elements want to enter :";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    MAX<float>(b,n);
    return 0;
}