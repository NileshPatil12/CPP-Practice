#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int k=1;k<=col;k++){
            if(i==1 || i==row){
                cout<<"*";
            }
            else if(k==1 || k==col ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}