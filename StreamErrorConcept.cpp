#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
int main()
{
    int a;
    cout<<"block of code before input operation "<<endl;
    cout<<"cin.rdstate() "<<cin.rdstate()<<endl;
    cout<<"cin.eof() "<<cin.eof()<<endl;
    cout<<"cin.fail() "<<cin.fail()<<endl;
    cout<<"cin.bad() "<<cin.bad()<<endl;
    cout<<"cin.good() "<<cin.good()<<endl;
    cout<<"\n\n Desired input is int but please enter character :";
    cin>>a;
    cout<<"\n";
    cout<<"After wrong input from user ";
    cout<<"cin.rdstate() "<<cin.rdstate()<<endl;
    cout<<"cin.eof() "<<cin.eof()<<endl;
    cout<<"cin.fail() "<<cin.fail()<<endl;
    cout<<"cin.bad() "<<cin.bad()<<endl;
    cout<<"cin.good() "<<cin.good()<<endl;
    cin.clear(ios::goodbit);
    cout<<"after cin.clear()";
    cout<<"\n cin.fail()"<<cin.fail();
    cout<<"\n cin.good()"<<cin.good()<<"\n";
    return 0;

}