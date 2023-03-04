#include<iostream>
using namespace std;
void test()
{
    try{
        throw"\nTry Catch example";
    }
    catch(const char*){
        cout<<"\n Inner try....catch block ";
        throw;
    }
}
int main()
{
    cout<<"\n Rethrowing the exception example";
    try
    {
        {
            test();

        }
    }
    catch(const char*)
    {
        cout<<"\n Exception is caught by outer try..catch block";
    }
    cout<<"\n rest of the program";
    return 0;
    }
