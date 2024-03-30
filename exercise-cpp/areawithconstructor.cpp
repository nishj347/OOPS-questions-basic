//Author : nishj347 @github
/*Write a program to print the area of two rectangles having sides (4,5) and (5,8)
respectively by creating a class named 'Rectangle' with a function named 'Area' which
returns the area. Length and breadth are passed as parameters to its constructor.*/

#include <iostream>

using namespace std;

class rectangle{
float length;
float breadth;

public:
rectangle(float l,float b){
  length=l;
  breadth=b;
}


float area(){
  return length*breadth;
    }
};

int main(){
  rectangle r1(4,5);
  rectangle r2(5,8);

  cout<<"area of rectangle 1 is:"<<r1.area()<<endl;
  cout<<"area of rectangle 2 is:"<<r2.area()<<endl;
}
