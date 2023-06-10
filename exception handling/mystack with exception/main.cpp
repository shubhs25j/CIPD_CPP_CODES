#include <iostream>
#include<cstring>
#include "MyStack.h"

int main() {
    try {
        MyStack stack;

        stack.push(10);
        stack.push(20);
        stack.push(30);

        std::cout << "Popped value: " << stack.pop() << std::endl;
        std::cout << "Popped value: " << stack.pop() << std::endl;
        std::cout << "Popped value: " << stack.pop() << std::endl;
        std::cout << "Popped value: " << stack.pop() << std::endl; // Throws StackException

    } catch (const StackException& ex) {
        std::cerr << "Exception: " << ex.getMessage() << std::endl;
    }

    return 0;
}
