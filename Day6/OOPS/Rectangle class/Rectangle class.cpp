#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1,r2;
    r1.length=5;
    r1.breadth=10;
    r2.breadth=25;
    r2.length=12;
    cout<<"Area of r1 is "<<r1.area();
    cout<<"Area of r2 is "<<r2.area();
}
