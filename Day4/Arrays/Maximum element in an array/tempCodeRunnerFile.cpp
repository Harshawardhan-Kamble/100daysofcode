#include<iostream>
using namespace std;
int main(){
    int m=100,A[10]={19,28,79,68,47,55,68,69,73,74};
    for(int i=0;i<10;i++){
        if(m>A[i]){
            m=A[i];
        }
    }
    cout<<"Minimum Element is "<<m;

}