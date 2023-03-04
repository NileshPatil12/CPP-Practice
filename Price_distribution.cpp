#include<iostream>
using namespace std;
int main()
{
    int price;
    cin>>price;
    int Rs100,Rs50,Rs10,Rs1;
    switch (100)
    {
    case 100:
        Rs100=price/100;
        cout<<"Rs 100 = "<<Rs100<<endl;
        price=price%100;
        
    case 50:
        Rs50=price/50;
        price=price%50;
        cout<<"Rs 50 = "<<Rs50<<endl;

    case 10:
        Rs10=price/10;
        price=price%10;
        cout<<"Rs 10 = "<<Rs10<<endl;

    case 1:
        Rs1=price/1;
        price=price%1;
        cout<<"Rs 1 = "<<Rs1;
    
    default:
        break;
    }
}