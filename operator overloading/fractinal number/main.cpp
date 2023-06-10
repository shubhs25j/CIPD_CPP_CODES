#include <iostream>
#include "RationalNumber.h"

int main() {
    RationalNumber num1(1, 2);
    RationalNumber num2(3, 4);

    RationalNumber sum = num1 + num2;
    RationalNumber diff = num1 - num2;
    RationalNumber product = num1 * num2;

    std::cout << "Sum: " << sum.getNumerator() << "/" << sum.getDenominator() << std::endl;
    std::cout << "Difference: " << diff.getNumerator() << "/" << diff.getDenominator() << std::endl;
    std::cout << "Product: " << product.getNumerator() << "/" << product.getDenominator() << std::endl;

    return 0;
}
