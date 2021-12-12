#include<iostream>
using namespace std;
int main(){
    int m,A[10]={19,28,79,68,47,55,68,69,73,74};
    m=A[0];
    for(int i=0;i<10;i++){
        if(m>A[i]){
            m=A[i];
        }
    }
    cout<<"Minimum Element is "<<m;
}