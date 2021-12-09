#include<iostream>
using namespace std;
int main(){
    int P,T,R,S;
    cout<<"Principle amount P = ";
    cin>>P;
    cout<<"Rate of Interest = ";
    cin>>R;
    cout<<"Time = ";
    cin>>T;
    S=(P*T*R)/100;
    cout<<"Simple Interest is "<<S;
}