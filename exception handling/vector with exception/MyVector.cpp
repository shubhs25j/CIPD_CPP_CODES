#include "MyVector.h"

MyVector::MyVector() {
    size = 0;
}

void MyVector::push(int value) {
    if (isFull()) {
        throw VectorException("Vector overflow");
    }
    vector[size++] = value;
}

int MyVector::pop() {
    if (isEmpty()) {
        throw VectorException("Vector underflow");
    }
    return vector[--size];
}

bool MyVector::isEmpty() const {
    return size == 0;
}

bool MyVector::isFull() const {
    return size == MAX_SIZE;
}

int MyVector::getSize() const {
    return size;
}
