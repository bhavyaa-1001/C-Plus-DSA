#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    // Constructor 1: No argument
    Complex() {
        real = imag = 0;
    }

    // Constructor 2: One argument
    Complex(float x) {
        real = imag = x;
    }

    // Constructor 3: Two arguments
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;          // calls constructor 1
    Complex c2(5);       // calls constructor 2
    Complex c3(2, 4);    // calls constructor 3

    cout << "First complex number: ";
    c2.display();
    cout << "Second complex number: ";
    c3.display();

    Complex c4 = c2.add(c3);  // Add two complex numbers
    cout << "Sum = ";
    c4.display();

    return 0;
}
