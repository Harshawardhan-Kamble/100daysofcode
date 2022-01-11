#include<iostream>
using namespace std;
class Car{
    public:
    void display(){
        cout<<"Car Started";
    }
};
class Advanced_Car:public Car{
     void music(){
        cout<<"Music Started";
     }
};
int main(){
    Car*P=new Advanced_Car();
    P->display();
}