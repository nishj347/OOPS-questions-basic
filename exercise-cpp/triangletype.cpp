// Author : nishj347 @github
// Write a C++ program to create a class called Triangle that has private member
// variables for the lengths of its three sides. Implement member functions to determine
// if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

class triangle {
    float side1;
    float side2;
    float side3;

public:
    triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    void typeoftriangle() {
        if (side1 == side2 && side2 == side3) {
            cout << "it is an equilateral triangle" << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "it is an isosceles triangle" << endl;
        }
        else {
            cout << "it is a scalene triangle" << endl;
        }
    }
};

int main() {
    triangle t(2.0, 3.0, 7.0);
    t.typeoftriangle();
    return 0;
}
