#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Pre-increment operator (++x)
    Complex& operator++() {
        real++;
        imag++;
        return *this;
    }

    // Post-increment operator (x++)
    Complex operator++(int) {
        Complex temp(*this);
        real++;
        imag++;
        return temp;
    }

    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2;

    // Pre-increment
    ++c1;
    c1.display();

    // Post-increment
    c2 = c1++;
    c1.display();
    c2.display();

    return 0;
}
