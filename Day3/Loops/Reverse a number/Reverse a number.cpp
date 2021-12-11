#include<iostream>
using namespace std;
int main(){
    int m,n,r,x=0;
    cout<<"Enter value to be displayed ";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n/=10;
        x=((x*10)+r);
    }
    cout<<"Number "<<m<<" when reversed is "<<x;
}