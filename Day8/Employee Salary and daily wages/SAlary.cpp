#include<iostream>
using namespace std;
class Employee{
private:
int id;
string name;
public:
Employee(int id,string name){
    this->id=id;
    this->name=name;
}
int getId(){return id;}
string getName(){return name;}
};
class Full: public Employee{
    private:
    int salary;
    public:
    Full(int id,string name,int salary):Employee(id,name){
        this->salary=salary;
    }
    int getSalary(){return salary;}
    };
class Part: public Employee{
    private:
    int wage;
    public:
    Part(int id,string name,int wage):Employee(id,name){
        this->wage=wage;
    }
    int getWage(){return wage;}
    };
int main(){
    Full p1(120,"Harsh",50000);
    Part p2(121,"Wardhan",9000);
    cout<<"Salary of "<<p1.getName()<<" is "<<p1.getSalary()<<endl;
    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getWage()<<endl;
}