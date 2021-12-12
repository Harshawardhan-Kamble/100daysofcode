#include<iostream>
using namespace std;
int main(){
    int A[10]={1,6,9,8,7,5,3,4,9,12},i=0,sum=0;
    for(int x:A){
        sum+=x;
        i++;
    }
    cout<<sum;
}