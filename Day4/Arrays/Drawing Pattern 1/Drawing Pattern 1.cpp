/*1234
  5678
  9101112
  */
 #include<iostream>
 using namespace std;
 int main(){
     int count=0;
     for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
             cout<<++count;
         }
         cout<<endl;
     }
 }