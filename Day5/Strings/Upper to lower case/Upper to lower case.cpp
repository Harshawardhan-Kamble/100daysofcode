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
        *it+=32;
        cout<<*it;    
    }
    
}