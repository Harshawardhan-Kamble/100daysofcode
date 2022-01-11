#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int length,int breadth);
    int getLength();
    int getBreadth();
    void setLength(int length);
    void setBreadth(int breadth);
    int area();
    int perimeter();
};
Rectangle::Rectangle(int length,int breadth){
        setLength(length);
        setBreadth(breadth);
    }
    Rectangle::Rectangle(){
        length=0;
        breadth=0;
    }
    int Rectangle::area(){
        return (length*breadth);
    }
    int Rectangle::perimeter(){
        return 2*(length+breadth);
    }
    int Rectangle::getLength(){
        return length;
    }
    int Rectangle::getBreadth(){
        return breadth;
    }
    void Rectangle::setLength(int length){
        if(length>0){
        this->length=length;
        }
        else{
            this->length=1;
            }
        }
    void Rectangle::setBreadth(int breadth){
        if(breadth>0){
        this->breadth=breadth;
        }
        else{
            this->breadth=1;
            }
    }
class Cuboid:public Rectangle{
    private:
    int height;
    public:
    void setHeight(int height){
        if (height>0){
            this->height=height;
        }
        else{
            this->height=1;
        }
    }
    int getHeight(){
        return height;
    }
    Cuboid(int length,int breadth,int height=0){
        setLength(length);
        setBreadth(breadth);
        setHeight(height);
    }
    int volume(){
        return(getLength()*getBreadth()*height);
    }
}; 
 int main(){
     Cuboid c(10,-15,20);
     cout<<c.area()<<endl;
     cout<<c.volume()<<endl;
 }   