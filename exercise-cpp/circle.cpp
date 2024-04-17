// Author : nishj347 github
// Write a C++ program to implement a class called Circle that has private member
// variables for radius. Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;
class circle{
    float r;
public:
circle(float r){
    this->r=r;
}
void area(){
    cout<<"area of circle is :"<<3.14*r*r<<endl;
}
void circumference(){
    cout<<"circumference of circle is:"<<2*3.14*r<<endl;
}
};

int main(){
    float r;
    cout<<"enter the radius:";
    cin>>r;
    circle c(r);
    c.area();
    c.circumference();
    return 0;
}
