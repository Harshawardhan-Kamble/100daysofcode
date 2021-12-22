#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;
    for(int  i=0;i<n;i++){
        for(int  j=0;(i+j)>=n-1;j++){
            cout<<"*";
        }
        for(int j=0;i>=j;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}