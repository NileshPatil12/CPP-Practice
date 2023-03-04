#include<iostream>
using namespace std;
int main()
{
    cout<<"\n Rethrowing exception example";
    try
    {
        try{
            throw 10;
        }
        catch(int a){
            cout<<"\ninner try block";
            throw;
        }
    }catch(int a){
        cout<<"\n Outter try block and exception has been occured "<<a;
    }
    cout<<"\nrest of the program";
    return  0;
}