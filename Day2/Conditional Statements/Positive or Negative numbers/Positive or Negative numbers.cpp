#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Number = ";
    cin>>b;
    if( b>0){
        cout<<b<<" is a positive number"; 
    }
    else if (b==0){
        cout<<b<<" is neither positive nor negative number";
    }
    else{
        cout<<b<<" is negative number";
    }

}