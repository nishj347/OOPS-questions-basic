// Author : nishj347 @github
//Write a program to print the volume of a box by creating a class named 'Volume'
//with an initialization list to initialize its length, breadth and height. (just to make you
//familiar with initialization lists)

#include <iostream>
using namespace std;

class volume {
private:
    double length;
    double breadth;
    double height;
public:
    void setdata(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }
    double findvolume() {
        return length * breadth * height;
    }
};

int main() {
    double length, breadth, height;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;
    cout << "Enter the height: ";
    cin >> height;

    volume box;
    box.setdata(length, breadth, height);

    cout << "Volume of the box is: " << box.findvolume() << endl;
    return 0;
}
