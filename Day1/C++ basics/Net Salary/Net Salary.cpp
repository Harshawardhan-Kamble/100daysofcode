#include<iostream>
using namespace std;
int main(){
    float Salary,Allowances,Deductions,Net_Salary;
    cout<<"Salary = ";
    cin>>Salary;
    cout<<"Percentage Allowances = ";
    cin>>Allowances;
    cout<<"Percentage Deductions = "<<endl;
    cin>>Deductions;
    Net_Salary=(Salary+(Salary*Allowances)-(Salary*Deductions));
    cout<<"Net Salary is "<<Net_Salary;
}