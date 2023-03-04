#include<iostream>
using namespace std;
class A
{
    public:
    class B{
        private:
        int num;
        public:
        void getData(int n){
            num=n;
        }
        void putData()
        {
            cout<<"\nThe data you have entered is "<<num;
        }
    };
};
int main(){
    A::B obj;
    obj.getData(100);
    obj.putData();
    return 0;

}