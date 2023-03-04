#include<iostream>
using namespace std;
int main(){
    int a[30],b[30],c[30],n1,n2,i,j,k;
    cout<<"\nEnter the no of element in first array : ";
    cin>>n1;
    cout<<"Enter the first array ";
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"\nEnter the no of element in second array : ";
    cin>>n2;
    cout<<"Enter the second array ";
    for(i=0;i<n2;i++){
        cin>>b[i];
    }
    i=0;j=0;k=0;
    while (i<n1 && j<n2)
    {
        if(a[i]<=b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    /*
    still some elements are left in a and b ;
    */
   while(i<n1){
       c[k++]=a[i++];
   }
   while(j<n2){
       c[k++]=b[j++];
   }
   cout<<"\nMerged array of A and B is ";
   for(i=0;i<n1+n2;i++){
       cout<<"\nc["<<i<<"] = "<<c[i];
   }
   return 0;
}