#include<iostream>
using namespace std;
int main()
{
    int a[30][30],m,n,i,j;
    cout<<"\nEnter the number of row and columns : ";
    cin>>m>>n;
    cout<<"\n Input the array : ";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        cout<<"\n";
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
            
        }
    }
    return 0;
}