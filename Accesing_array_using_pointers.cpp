#include<iostream>
using namespace std;
int main()
{
    int a[5]={11,22,33,44,55};
    int* p;
    p=a;
    cout<<"\n Printing array elementsnusing pointers ";
    for(int i=0;i<5;i++){
        cout<<"\n"<<*p;
        p++;
    }
    return 0;
}