#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
       cout<<"Sum of the first "<<n<<" natural numbers is "<<sum;
}