#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s,username;
    cout<<"Enter your email address";
    cin>>s;
    for(int i=0;s[i]!='@';i++){
        username=username+s[i];
    }
    cout<<"Username is "<<username;
}