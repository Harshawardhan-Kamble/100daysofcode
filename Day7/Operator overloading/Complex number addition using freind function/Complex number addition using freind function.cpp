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
    void display(){
        cout<<real<<"+"<<imaginary<<"i";
    }
   friend Complex operator+ (Complex x1,Complex x2);
};
Complex operator+(Complex x1,Complex x2){
        Complex t;
        t.real=x1.real+x2.real;
        t.imaginary=x1.imaginary+x2.imaginary;
        return t;
    }
int main(){
    Complex c1(5,7);
    Complex c2(14,8);
    Complex c3;
    c3=c1+c2;
    c3.display();
}