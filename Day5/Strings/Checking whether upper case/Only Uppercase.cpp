#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a word ";
    cin>>s;
    string::iterator it;
    it=s.begin();
    for(it=s.begin();it!=s.end();it++){
        if(*it>=65 && *it<=90){
            cout<<*it;
            }
        else{
            *it-=32;
            cout<<*it;
        }
    }
    
}