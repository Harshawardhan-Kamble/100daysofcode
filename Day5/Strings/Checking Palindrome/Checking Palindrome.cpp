#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s,reverse;
    cout<<"Enter a Word";
    cin>>s;
    string::reverse_iterator it;
    for( it=s.rbegin();it!=s.rend();it++){
        if (*it>=65 && *it<=90)
        {

        }
        else{
            *it=*it-32;
        }
        reverse=reverse+(*it);
    }
    if(reverse==s){
        cout<<s<<" is a Palindromne";
    }
    else{
        cout<<s<<" is not a Palindromne";
    }
}