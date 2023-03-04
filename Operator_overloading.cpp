#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real,image;
    public:
    Complex(int r=0, int i=0){real=r;image=i;}
    Complex operator + (Complex const &obj){
        Complex res;
        res.real=real+obj.real;
        res.image=image+obj.image;
        return res;
    }
    void print()
    {
        cout<<real;
        cout<<" + "<<image<<endl;
    }
};
int main()
{
    Complex c1(12,4),c2(2,3);
    Complex c3=c1+c2;
    return 0;
    
}