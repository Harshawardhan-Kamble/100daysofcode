#include<iostream>
using namespace std;
int main(){
    int m,n,r,sum=0;
    cout<<"Enter value to be displayed ";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n/=10;
        sum+=(r*r*r);
    }
    if(sum==m){
        cout<<m<<" is an Armstrong Number";
    }
    else{
        cout<<m<<" is not an Armstrong Number";
    }
}

