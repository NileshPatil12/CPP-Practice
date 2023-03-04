#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        int nextNUm=a+b;
        cout<<nextNUm<<" ";
        b=a;
        a=nextNUm;
    }
}