#include <iostream>
#include "MyVector.h"

int main() {
    try {
        MyVector vector;

        vector.push(10);
        vector.push(20);
        vector.push(30);

        std::cout << "Popped value: " << vector.pop() << std::endl;
        std::cout << "Popped value: " << vector.pop() << std::endl;
        std::cout << "Popped value: " << vector.pop() << std::endl;
        std::cout << "Popped value: " << vector.pop() << std::endl; // Throws VectorException

    } catch (const VectorException& ex) {
        std::cerr << "Exception: " << ex.getMessage() << std::endl;
    }

    return 0;
}
