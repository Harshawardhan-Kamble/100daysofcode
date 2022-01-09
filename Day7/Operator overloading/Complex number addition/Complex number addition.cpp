#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imaginary;
    public:
    Complex (int r=0,int i=0){
        real=r;
        imaginary=i;
    }
    Complex operator+ (Complex x){
        Complex t;
        t.real=real+x.real;
        t.imaginary=imaginary+x.imaginary;
        return t;
    }
    void display(){
        cout<<real<<"+"<<imaginary<<"i";
    }
};
int main(){
    Complex c1(5,7);
    Complex c2(14,8);
    Complex c3;
    c3=c1+c2;
    c3.display();
}