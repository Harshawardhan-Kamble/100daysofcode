#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float r,h,v;
    cout<<"Radius = ";
    cin>>r;
    cout<<"Height = ";
    cin>>h;
    v=3.14*pow(r,2)*h;
    cout<<"Volume of cylinder = "<<v;
}