#include<iostream>
using namespace std;
int main()
{
    int  ptr[5];
    int *abc[5];
    cout<<"Enter the array : \n";
    for(int i=0;i<5;i++){
        cin>>ptr[ i];
    }
    for(int j=0;j<5;j++){
        abc[j]=&ptr[j];
    }
    cout<<"\n The values are "<<endl;
    for(int k=0;k<5;k++){
        cout<<*abc[k]<<endl;
    }
}