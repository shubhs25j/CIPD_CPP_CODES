#include <iostream>

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imaginary = imaginary + other.imaginary;
        return temp;
    }

    Complex operator-(const Complex& other) {
        Complex temp;
        temp.real = real - other.real;
        temp.imaginary = imaginary - other.imaginary;
        return temp;
    }

    Complex operator-() {
        Complex temp;
        temp.real = -real;
        temp.imaginary = -imaginary;
        return temp;
    }

    Complex operator++() {
        Complex temp;
        temp.real = ++real;
        temp.imaginary = ++imaginary;
        return temp;
    }

    Complex operator++(int) {
        Complex temp;
        temp.real = real++;
        temp.imaginary = imaginary++;
        return temp;
    }

    void display() {
        std::cout << "Real: " << real << " Imaginary: " << imaginary << "\n";
    }
};

int main() {
    Complex c1(3, 4), c2(2, 1), c3, c4;

    c3 = c1 + c2;
    c3.display();

    c3 = c1 - c2;
    c3.display();

    c2 = -c1;
    c2.display();

    c4 = ++c1;
    c4.display();

    c4 = c1++;
    c4.display();

    return 0;
}
