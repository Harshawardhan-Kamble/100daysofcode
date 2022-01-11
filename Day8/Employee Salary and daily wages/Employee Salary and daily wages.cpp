#include<iostream>
using namespace std;
class Employees{
    private:
    int id;
    string name;
    public:
    Employees(int id,string name){
        this->id=id;
        this->name=name;
    }
};
class Fulltime:public Employees {
private:
int salary;
public:
Fulltime(int id,string name,int salary){
    this->salary=salary;
}
};
