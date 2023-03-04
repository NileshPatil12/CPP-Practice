#include<iostream>
using namespace std;
void example (int a) throw (int ,double,char)
{
    if(a==0) throw 'a';
    else
    if(a==1) throw a;
    else
    if(a==-1) throw 231.30;
}
int main(){
    try
{
    cout<<"specifying exception \n";
    cout<<"x==0 \n";
    //example(0);
    cout<<"x==1\n";
    //example(1);
    cout<<"x==-1\n";
    //example(-1);
    cout<<"x==2\n";
    example(2);
}
catch(char c){
    cout<<"found an charcter\n";
}
catch(int m){
    cout<<"found an integer\n";
}
catch (double d){
    cout<<"found an double\n";
}
cout<<"End of the try catch system\n";
return 0;
}