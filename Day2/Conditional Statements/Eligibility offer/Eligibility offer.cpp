// Eligible if age is less than 12 or greater than 50
#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter your age = ";
    cin>>b;
    if( b<12 || b>50){
        cout<<"Eligible "; 
    }
    else{
        cout<<"Not Eligible ";
    }
}