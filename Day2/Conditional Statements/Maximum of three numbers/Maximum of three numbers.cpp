#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"First Number =";
    cin>>a;
    cout<<"Second Number =";
    cin>>b;
    cout<<"Third Number = ";
    cin>>c;
    if( a>b && a>c){
        cout<<a<<" is Maximum number"; 
    }
    else if (b>c){
        cout<<b<<"is Maximum number";
    }
    else{
        cout<<c<<" is maximum number";
    }

}