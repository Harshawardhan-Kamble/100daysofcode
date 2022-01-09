#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int length=0,int breadth=0);
    void setLength(int length );
    void setBreadth(int breadth );
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
};
Rectangle::Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
void Rectangle:: setLength(int length ){
        if (length>0){
            this->length=length;
        }
        else{
            this->length=1;
        }
    }
void Rectangle:: setBreadth(int breadth ){
        if (breadth>0){
            this->breadth=breadth;
        }
        else{
            this->breadth=1;
        }
    }
int Rectangle:: getLength(){
    return length;
}
int Rectangle:: getBreadth(){
    return breadth;
}
int Rectangle::area(){
    return (length*breadth);
}
int Rectangle:: perimeter(){
    return 2*(length+breadth);
}
class Cuboid:public Rectangle{
    private:
    int height;
    public:
    Cuboid (int length,int breadth, int height=0){
        setLength(length);
        setBreadth(breadth);
        this->height=height;
    }
    int volume(){
        return (getLength()*getBreadth()*height);
    }
    };
int main(){
    Cuboid c (5,5,5);
    cout<<c.getLength()<<endl;
    cout<<c.getBreadth()<<endl;
    cout<<c.volume()<<endl;
    cout<<c.area()<<endl;
}