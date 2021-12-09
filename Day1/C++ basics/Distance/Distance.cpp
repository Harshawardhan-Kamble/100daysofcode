//Distance using initial velocity and final velocity and acceleration 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int u,v,a,s;
    cout<<"Initial velocity u = ";
    cin>>u;
    cout<<"Final velocity v = ";
    cin>>v;
    cout<<"Acceleration a = ";
    cin>>a;
    s=(pow(v,2)-pow(u,2))/(2*a);
    cout<<"Distance is "<<s;
}