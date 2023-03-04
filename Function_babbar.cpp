#include<iostream>
using  namespace std;

void pow(int num1,int num2){
    int power=1;
    int x=num2;
    while(x!=0){
        power=power*num1;
        x--;
    }
    cout<<"POwer of "<<num1<<" is "<<num2<<"= "<<power;
}

bool isEven(){
    int a;
    cout<<"Enter the number to check if it it eve or not ";
    cin>>a;
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
    
}

void AP(){
    int n;
    cin>>n;
    if(n<1){
        cout<<"Invalid";
        return;   
    }
    int x= (3*n)+7;
    cout<<"A.P is "<<x<<endl;
}

void nCr(){
    int n,r;
    cout<<"Enter the n ";
    cin>>n;
    cout<<"\nEnter the r ";
    cin>>r;

    //so first find n!;
    int temp=n;
    int num=1;
    while(temp>0){
        num=num*temp;
        temp--;
    }
    //find r!
    temp=r;
    int deno=1;
    while(temp>0 ){
        deno=deno*temp;
        temp--;
    }
    //find(n-r)!
    temp=(n-r);
    while(temp){
        deno=deno*temp;
        temp--;
    }

    int result = num/deno;
    cout<<"nCr  is "<<result<<endl;
}

void setBits()
{
    int a,b;
    cin>>a;
    cin>>b;
    int count=0;
    while(a!=0){
        if(a&1==1){
            count++;
        }
        a=a>>1;
    }
    while(b!=0){
        if(b&1==1){
            count++;
        }
        b=b>>1;
    }
    cout<<"the number of set bits will be "<<count<<endl;
}

void fibonacci(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    if(n==1){
        cout<<a;
        return;
    }
    if(n==2){
        cout<<b;
        return;
    }
    cout<<a<<" "<<b<<" ";
    int temp;
    for(int i=3;i<=n;i++){
        temp=a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }
    // cout<<temp<<" ";
}
int main()
{
    // int a,b;
    // cin>>a;
    // cin>>b;
    // pow(a,b);
    // bool hey=isEven();
    // cout<<"It is even or not "<<hey<<endl;
    // nCr();
    // AP();
    // setBits();
    fibonacci();

}