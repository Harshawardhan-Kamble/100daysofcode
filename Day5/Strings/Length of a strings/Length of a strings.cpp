#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Enter a Word ";
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    cout<<"Length of String is "<<count;
}