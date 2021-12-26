#include<iostream>
using namespace std;
int total_marks=0;
int percentage=0;
class Student
{
    private:
    int RollNo;
    string name;
    int Physics;
    int Chemistry;
    int Maths;
    public:
    void setRollNo(int r);
    void setName(string name);
    void setPhysics(int p){
        cout<<"Enter marks in Physics ";
        cin>>p;
        Physics=p;
    }
    void setChemistry(int c){
        cout<<"Enter marks in Chemistry ";
        cin>>c;
        Chemistry=c;
    }
    void setMaths(int m){
        cout<<"Enter marks in Maths ";
        cin>>m;
        Maths=m;
    }
    int total (){
        int total_marks=(Chemistry+Maths+Physics);
        return total_marks;
    }
    int grade(){
        int percentage=(total_marks/300)*100;
        if(percentage<40){
            cout<<"C grade";
        }
        else if(percentage>60){
            cout<<"A grade";
        }
        else{
            cout<<"B grade";
        }
    }
};
int main(){
    Student S;
    S.setChemistry(80);
    S.setMaths(80);
    S.setPhysics(80);
    cout<<S.total();
    cout<<S.grade();
    

}

