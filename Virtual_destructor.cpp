#include<iostream>
using namespace std;
class base {
    public:
    base(){
        cout<<"Constructing base \n";
    }
    ~base(){
        cout<<"Destructing base \n ";
    }
};
class derive : public base{
    public:
    derive(){
        cout<<"Constructing derive\n ";
    }
    ~derive(){
        cout<<"Destructing derive \n ";
    }
};

int main()
{
    derive *d= new derive();
    base* b=d;
    delete b;
    getchar();
    return 0;
}