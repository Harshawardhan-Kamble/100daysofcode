#include<iostream>
using namespace std;
int main(){
    int count_positive=0,count_negative=0;
    int A[10]={-19,-28,-79,68,47,55,68,-69,-73,-74};
    for(int i=0;i<10;i++){
        if(A[i]>0){
            count_positive++;
        }
        else if(A[i]<0){
            count_negative++;
        }
}
    cout<<"Positive elements in the given array is "<<count_positive<<endl;
    cout<<"Negative elements in the given array is "<<count_negative;
}