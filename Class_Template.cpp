#include<iostream>
using namespace std;
template<class T,int MAX>
class Exam
{
    T arr[MAX];
    public:
    void accept(){
        cout<<"\n Enter "<<MAX<<" elemnts :";
        for(int i=0;i<MAX;i++){
            cin>>arr[i];
        }

    }
    void display(){
        cout<<"\n Content of array are :";
        for(int i=0;i<MAX;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    Exam<float,5> d;
    d.accept();
    d.display();
    return 0;
}