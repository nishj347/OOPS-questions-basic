//Author : nishj347 @github 
//Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
#include <iostream>
using namespace std;
class area{
    public:
    int length;
    int breadth;

    void setdim(int l, int b){
        length=l;
        breadth=b;
        }
    int getarea(){
        return length*breadth ;
    }    
};
int main(){
    area a1;
    a1.setdim(21,23);

    cout<<"area is:"<<a1.getarea()<<endl;
return 0;
}
