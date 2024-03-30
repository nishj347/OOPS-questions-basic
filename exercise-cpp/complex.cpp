//Author : nishj347 @github
/*Print the sum, difference and product of two complex numbers by creating a class
named 'Complex' with separate functions for each operation whose real and imaginary
parts are entered by the user.*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(); 
    Complex(int r, int i); 
    void display(); 
    Complex add(const Complex& c); 
    Complex subtract(const Complex& c); 
    Complex multiply(const Complex& c); 
};


Complex::Complex() {
    real = 0;
    img = 0;
}


Complex::Complex(int r, int i) {
    real = r;
    img = i;
}


void Complex::display() {
    cout << real << " + " << img << "i";
}


Complex Complex::add(const Complex& c) {
    Complex result;
    result.real = real + c.real;
    result.img = img + c.img;
    return result;
}


Complex Complex::subtract(const Complex& c) {
    Complex result;
    result.real = real - c.real;
    result.img = img - c.img;
    return result;
}


Complex Complex::multiply(const Complex& c) {
    Complex result;
    result.real = (real * c.real) - (img * c.img);
    result.img = (real * c.img) + (img * c.real);
    return result;
}

int main() {
    int real1, img1, real2, img2;

    
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> img1;

    
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> img2;

  
    Complex c1(real1, img1);
    Complex c2(real2, img2);


    Complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.display();
    cout << endl;


    Complex diff = c1.subtract(c2);
    cout << "Difference: ";
    diff.display();
    cout << endl;

 
    Complex product = c1.multiply(c2);
    cout << "Product: ";
    product.display();
    cout << endl;

    return 0;
}
