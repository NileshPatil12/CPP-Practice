#include<iostream>
using namespace std;
void reverse(int arr[],int n){
   int i=0;
   int j=n-1;
   while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
   }
}

void reverseAlternate(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1 <n){
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
        else{
            cout<<i<<endl;
            break;
        }
    }
}


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n=11;
 
    int arr[n]={1,2,3,4,5,6,7,8,9,0,-1};
   
    reverseAlternate(arr,n);
    print(arr,n);
    
    return 0;
}