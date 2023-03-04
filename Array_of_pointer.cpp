#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int marks[4];
    cout<<"Enter the elements of an array :"<<endl;
    for(int i=0;i<4;i++){
        cin>>marks[i];

    }
    ptr=marks;
    cout<<"The value of *ptr "<<*ptr+2;
    cout<<"\n The value of *marks is "<<marks[2];
    return 0;
}