#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class str_op
{
    private:
    char str[40];
    public:
    void get_string(){
        cout<<"\n Enter the string ";
        cin>>str;
    }
    friend void operator<<(ostream &a,str_op &b){
        a<<b.str;
    }
};
int main(){
    str_op s1;
    s1.get_string();
    cout<<s1;
    return 0;
}
