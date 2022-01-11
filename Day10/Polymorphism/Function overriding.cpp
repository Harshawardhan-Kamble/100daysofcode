#include<iostream>
using namespace std;
class base{
    public:
virtual void fun1(){
        cout<<"Function of base";
    }
};
class derived:public base{
    public:
    void fun1(){
        cout<<"Function of derived";
    }
};
int main(){
    derived b;
    base *p=&b;
    p->fun1();
}