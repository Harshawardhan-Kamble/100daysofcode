#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,d,r1,r2;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    d=pow(b,2)-(4*a*c);
    if( d==0){
        r1=-b/(2*a);
        cout<<r1<<endl;
        cout<<" Roots are real and equal "<<" "<<r1;
    }
    else if (d>0){
        r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"Roots are real but unequal."<<"Roots are "<<r1<<" and "<<r2;
    }
    else{
        cout<<" Roots are imaginary ";
    }

}