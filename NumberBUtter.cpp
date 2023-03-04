#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            if(j==i){
                cout<<j;
            } 
            else{
                cout<<" ";
            }
        }
        int space= 2*n -2*i;
        for(int j=1;j<=space-1;j++){
            cout<<" ";
        }
        if(count <n){
            cout<<count++;
        }
        cout<<endl;

        }
        count=n-1;
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==i){
                cout<<j;
            } 
            else{
                cout<<" ";
            }
        }
        int space= 2*n -2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        if(count > 0){
            cout<<count--;
        }
        cout<<endl;

        }
}