#include<iostream>
using namespace std;
class basic_car{
    public:
    virtual void display()=0;
};
class Advanced_car:public basic_car{
    public:
    void display(){
        cout<<"Advanced car Started";
    }
};
int main(){
    Advanced_car a;
    basic_car *p=&a;
    p->display();
}