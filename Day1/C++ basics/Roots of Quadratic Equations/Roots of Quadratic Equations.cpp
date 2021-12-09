#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int root_1,root_2,a,b,c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    root_1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    root_2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"The roots of the quadratic equations are "<<root_1<<" and "<<root_2;
}