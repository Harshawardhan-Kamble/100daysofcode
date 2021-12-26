#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    int setLength(int l){
        length=l;
    }
    int setBreadth(int b){
        breadth=b;
    }
    int getLength(){
        return length;
    }
        int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1,r2;
    r1.setLength(5);
    r1.setBreadth(10);
    r2.setBreadth(25);
    r2.setLength(12);
    cout<<"Length is "<<r1.getLength()<<endl;
    cout<<"Length is "<<r2.getLength()<<endl;
    cout<<"Breadth is "<<r1.getBreadth()<<endl;
    cout<<"Breadth is "<<r2.getBreadth()<<endl;
    cout<<"Area of r1 is "<<r1.area()<<endl;
    cout<<"Area of r2 is "<<r2.area()<<endl;

}
