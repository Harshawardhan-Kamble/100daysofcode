#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Number = ";
    cin>>b;
    if( b>0 && b%2==0){
        cout<<b<<" is  EVEN"; 
    }
    else if (b==0){
        cout<<b<<" is neither EVEN nor ODD number";
    }
    else{
        cout<<b<<" is ODD";
    }

}