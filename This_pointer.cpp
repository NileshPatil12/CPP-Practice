#include<iostream>
using namespace std;
class This_pointer{
    int count;
    public:
    This_pointer(int count){
        this->count=100;
        cout<<"\n The value of count passed by object is "<<count;
        cout<<"\n The value of count in this class is "<<this->count;
    }
};
int main()
{
    cout<<"\n Program for This pointer ";
    This_pointer a(300);
    return 0;
}