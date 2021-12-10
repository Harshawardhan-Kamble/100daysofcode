/*if Avg>=60 Grade A
if 35<=Avg<60 Grade B
if Avg<35 Grade C
*/
#include<iostream>
using namespace std;
int main(){
    float a,b,c,Avg;
    cout<<"Subject 1 = ";
    cin>>a;
    cout<<"Subject 2 = ";
    cin>>b;
    cout<<"Subject 3 = ";
    cin>>c;
    Avg=(a+b+c)/3;
    cout<<Avg<< endl;
    if( Avg>=60){
        cout<<"Grade A";
    }
    else if (Avg>=35 && Avg<60){
        cout<<"Grade B";
    }
    else{
        cout<<"Grade C";
    }

}