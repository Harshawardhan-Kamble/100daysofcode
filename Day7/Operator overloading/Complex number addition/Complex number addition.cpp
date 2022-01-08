#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imaginary;
    
    Complex(int r=0,int i=0 ){
        real=r;
        imaginary=i;
        }
    Complex add (Complex x){
        Complex temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;
    }

};
int main(){
    Complex c1(4,5);
    Complex c2(5,4);
    Complex c3;
    c3=c1.add(c2);
    cout<<c3.real<<"+"<<c3.imaginary<<"i";
}