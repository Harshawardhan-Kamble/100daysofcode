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
    friend ostream & operator<<(ostream &O ,Complex&c3);
   friend Complex operator+ (Complex x1,Complex x2);

};
ostream & operator<<(ostream &O ,Complex&c3){
        O<<c3.real<<"+"<<c3.imaginary<<"i";
        return O;
    }
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
    cout<<c3;
}                                                                          