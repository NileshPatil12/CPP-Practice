#include<iostream>
using namespace std;
int global_variable=90;
void changevariable(int* pp){
    pp=&global_variable;
}
int main()
{
    int var=23;
    int* ptr_to_ptr= &var;
    cout<<"Passing pointer to function :"<<endl;
    cout<<"Before :"<<*ptr_to_ptr<<endl;
    changevariable(ptr_to_ptr);
    cout<<"After: "<<*ptr_to_ptr<<endl;
    return 0;
}