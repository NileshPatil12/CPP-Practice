#include<iostream>
#include<cstring>
using namespace std;

class example
{
    private:
    int a,b;
    public:
    void display(int c){
        a=c;
        cout<<"\n This function is called using function pointer: "<<a;
    }
    void print(int d)
    {
        b=d;
        cout<<"\n this another function is also called fromfunction pointer : "<<b;

    }
};
int main()
{
    example e;
    example *d;
    d=&e;
    cout<<"\n These are called using function pointer ";
    d->display(2000);
    d->print(199);
}
