#include<iostream>
using namespace std;
class Student{
    private:
    int Rollno;
    string name;
    int Physics;
    int Chemistry;
    int Maths;
    public:
    string setName(string p){
        cout<<"Enter Student name ";
        cin>>name;
        name=p;
    }
    int setRollno(int r){
        cout<<"Enter ROllno  ";
        cin>>r;
        Rollno=r;
    }
    int setPhysics(int p){
        cout<<"Enter marks in Physics ";
        cin>>p;
        Physics=p;
    }
    int setChemistry(int c){
        cout<<"Enter marks in Chemistry ";
        cin>>c;
        Chemistry=c;
    }
    int setMaths(int m){
        cout<<"Enter marks in Maths ";
        cin>>m;
        Maths=m;
    }
    int getPhysics(){
        return Physics;
    }
    int getChemistry(){
        return Chemistry;
    }
    int getMaths(){
        return Maths;
    }
    int total (){
        return (Maths+Physics+Chemistry);        
    }
    char grade (){
        int percentage =((Maths+Physics+Chemistry)*100)/300;
        if(percentage<40){
            return 'C';
        }
        else if(percentage>60){
             return 'A';
        }
        else{
             return 'B';
        }

    }
};
int main(){
    Student S;
    S.setRollno(0);
    S.setPhysics(0);
    S.setMaths(0);
    S.setChemistry(0);
    cout<<"Total is "<<S.total()<<endl;
    cout<<"Grade is "<<S.grade()<<endl;

}