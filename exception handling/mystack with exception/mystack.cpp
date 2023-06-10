#include<iostream>
#include<cstring>
#include "MyStack.h"

MyStack::MyStack() {
    top = -1;
}

void MyStack::push(int value) {
    if (isFull()) {
        throw StackException("Stack overflow");
    }
    stack[++top] = value;
}

int MyStack::pop() {
    if (isEmpty()) {
        throw StackException("Stack underflow");
    }
    return stack[top--];
}

bool MyStack::isEmpty() const {
    return top == -1;
}

bool MyStack::isFull() const {
    return top == MAX_SIZE - 1;
}
