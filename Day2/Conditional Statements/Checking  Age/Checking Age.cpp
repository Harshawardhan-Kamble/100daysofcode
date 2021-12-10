// Young if age is greater than or equal to 12 and less than or equal to 50
#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter your age = ";
    cin>>b;
    if( b>=12 && b<=50){
        cout<<"Young "; 
    }
    else{
        cout<<"Not Young ";
    }

}