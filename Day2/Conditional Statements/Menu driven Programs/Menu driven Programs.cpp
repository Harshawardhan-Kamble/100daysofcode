#include<iostream>
using namespace std;
int main(){
    int option,a,b,c;
    cout<<" Menu \n ";
    cout<<"1.Add \n 2.Subtract \n 3.Multiply \n 4.Division \n ";
    cout<<"Enter your Choice ";
    cin>>option;
    if(option>4){
        cout<<"Invalid Option ";
        return 0 ;
    }
    cout<<"Enter two numbers ";
    cin>>a>>b;
    switch (option){
        case 1 :c=a+b;
                cout<<"Result is "<<c;
        break;
        case 2 :c=a-b;
                cout<<"Result is "<<c;
        break;
        case 3 :c=a*b;
                cout<<"Result is "<<c;
        break;
        case 4 :c=a/b;
                cout<<"Result is "<<c;
        break;
    }
}