#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\n Example of multiple exception ";
    cout<<"\n Enter the number";
    cin>>a;
    try{
        if(a==1){
            throw 10;
        }
        if(a==2){
            throw float(20.3);
        }
        if(a==3){
            throw 'x';
        }
        cout<<"\n Exception does not occurs ";
    }
    catch(int a){
        cout<<"\nThis is an first exception ,and the number is "<<a;
    }
    catch(float a){
        cout<<"\n This is first exception and the value is "<<a;
    }
    catch(char a){
        cout<<"\n This is an first exception and the value is "<<a;
    }
    return 0;
}