#include<iostream>
using namespace std;
class celsius
{
    private:
    float temper;
    public:
    celsius()
    {
        temper=0;
    }
    operator float()
    {
        float fer;
        fer=temper*9/5+32;
        return (fer);
    }
    void gettemper()
    {
        cout<<"\n Enter Temperature in celsius";
        cin>>temper;
    }
};
int main()
{
    celsius cel;
    float fer;
    cel.gettemper();
    fer=cel;
    cout<<"\nTemperature in Fahrenheit Measurement: "<<fer;
    return 0;
}