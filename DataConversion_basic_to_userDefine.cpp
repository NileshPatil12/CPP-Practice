#include<iostream>
using namespace std;
class celsius
{
    private:
    float temper;
    public:
    celsius(){
        temper=0;
    }celsius(float ftmp){
        temper=(ftmp-32)*5/9;

    }
    void showtemper()
    {
        cout<<"Temperature in Celsius"<<temper;
    }
};
int main()
{
    celsius cel;
    float fer;
    cout<<"\n Enter temperature in Fahrenheit measurement : ";
    cin>>fer;
    cel=fer;
    cel.showtemper();
    return 0;
}