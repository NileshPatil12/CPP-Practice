#include<iostream>
#include<emath>
using namespace std;
class Cartesian
{
    private:
    float xco,yco;
    public:
    Cartesian(){
        xco=0;yco=0;
    }
    Cartesian(float a,float b){
        xco=a;yco=b;
    }
    void display(){
        cout<<"("<<xco<<","<<yco<<")";
    }
};
class Polar
{
    private:
    float radius,angle;
    public:
    Plar(){
        radius=0;
        angle=0;
    }
    Polar(float rad,float ang){
        radius=rad;
        angle=ang;
    }
    operator Cartesian(){
        float a=static_cast<int>(radius*cos(angle));
        float b=static_cast<int>(radius*sin(angle));
        return Cartesian(a,b);
    }
    void display(){
        cout<<"("<<radius<<","<<angle<<")";
}
};

int main(){
    Polar me(20.0,0.32);
    Cartesian cart;
    cart=me;
    cout<<"\n Given polar :";
    me.display();
    cout<<"\nThis is cartesian";
    cart.display();
    return 0;
}