#include<iostream>
using namespace std;
class Box
{
    double lenght;
    double breadth;
    double height;
    public:
    double getVolume(void){
        return lenght*breadth*height;
    }
    double setLength(double len){
        lenght=len;
    }
    double setBreadth(double bred){
        breadth=bred;
    }
    double setHeight(double heit){
        height=heit;
    }
    Box operator+(const Box& b){
        Box box;
        box.lenght=this->lenght;
        box.height=this->height;
        box.breadth=this->breadth;
        return box;
    }
};
int main(){
    Box box1;
    Box box2;
    Box box3;
    double volume=0.0;
    //Box1 specs
    box1.setBreadth(7.0);
    box1.setHeight(6.7);
    box1.setLength(2.6);
    //Box2 spec
    box2.setBreadth(7.2);
    box2.setHeight(1.7);
    box2.setLength(4.6);
    //volume of box 1
    volume=box1.getVolume();
    cout<<"Volume of the box 1 is "<<volume<<endl;
    //volume of box 2 
    volume=box2.getVolume();
    cout<<"Volume of the box 2 is "<<volume<<endl;
    //Add two objects 
    box3=box1+box2;
    volume=box3.getVolume();
    cout<<"VOlume of Box 3 is "<<volume<<endl;
    return 0;


}