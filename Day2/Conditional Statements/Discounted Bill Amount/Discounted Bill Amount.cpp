/*if Amount>=5000 Offer 20% discount
if 2000<=Amount<5000 Offer 10% discount
if Amount<2000 Offer 5% discount
*/
#include<iostream>
using namespace std;
int main(){
    float Amount,Discounted_Amount;
    cout<<"Enter Amount = ";
    cin>>Amount;
    if( Amount>=5000){
        Discounted_Amount=Amount-(Amount*0.2);
        cout<<"Final Amount after Discount is "<<Discounted_Amount;
    }
    else if (Amount>=2000 && Amount<5000){
        Discounted_Amount=Amount-(Amount*0.1);
        cout<<"Final Amount after Discount is "<<Discounted_Amount;
    }
    else{
        Discounted_Amount=Amount-(Amount*0.05);
        cout<<"Final Amount after Discount is "<<Discounted_Amount;
    }

}