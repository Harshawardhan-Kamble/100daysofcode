#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    int area();
    int perimeter();
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l,int b);
    void setLength(int l){
        if(length>0){
        length=l;    
        }
        else{
            length=1;
        }
        
    }
    void setBreadth(int b){
        if(breadth>0){
        breadth=b;    
        }
        else{
            breadth=1;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    bool isSquare();
};
int Rectangle::area(){
    return (length*breadth);
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::Rectangle(int l,int b){
        setLength(l);
        setBreadth(b);
        }
bool Rectangle::isSquare(){
    return length==breadth;
}
int main(){
     Rectangle r(15,15);
     cout<<r.area()<<endl;
     if(r.isSquare()){
         cout<<"YES "<<endl;
     }
     cout<<r.getBreadth();
}