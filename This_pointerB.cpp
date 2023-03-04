#include<iostream>
using namespace std;

class test
{
    private:
    int z;
    public:
    test(){

    }
    test(int d){
        z=d;
    }
    void print(){
        cout<<z;
    }
    test& operator= (test& a){
        z=a.z;
        cout<<"\n Assignment operator invoked";
        return * this;
    }
};

int main(){
    test a1(500);
    test x,y;
    y=x=a1;
    cout<<"\nx=";x.print();
    cout<<"\ny=";y.print();
    cout<<endl;
    return 0;
}