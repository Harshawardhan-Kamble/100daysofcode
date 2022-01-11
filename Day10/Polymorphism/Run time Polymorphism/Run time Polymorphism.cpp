#include<iostream>
using namespace std;
class car{
    public:
    virtual void start()=0;
};
class Innova:public car{
    public:
    void start(){
        cout<<"Innova started"<<endl;
    }
};
class Swift:public car{
    public:
    void start(){
        cout<<"Swift started";
    }
};
int main(){
    car *p;
    p=new Innova();
    p->start();
    p=new Swift();
    p->start();
}