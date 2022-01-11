#include<iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    int area(){
        return (length*breadth);
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth; 
    }
    void setBreadth(int b){breadth=b;}
    void setLength(int l){length=l;}

};
class Cuboid:public Rectangle{
    private:int height;
    public:
    void setHeight(int h){height=h;}
    int volume(){
        return (getLength()*getBreadth()*height);
    }
};
int main(){
    Cuboid c;
    Rectangle *P=&c;
    c.setBreadth(10);
    c.setLength(20);
    c.setHeight(10);
    cout<<c.area()<<endl;
    cout<<c.perimeter()<<endl;
}