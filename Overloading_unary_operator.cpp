#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;

    public:
    Distance(){
        feet=0;
        inches=0;
    }
    Distance(int f,int e){
        feet=f;
        inches=e;
    }
    void displaydistance(){
        cout<<"F:"<<feet<<" I:"<<inches<<endl;
    }
    Distance operator-(){
        feet=-feet;
        inches=-inches;
    return Distance(feet,inches);

    }
};
int main()
{
    Distance d1(11,10),d2(-2,11);
    -d1;
    d1.displaydistance();
    -d2;
    d2.displaydistance();
    return 0;

}