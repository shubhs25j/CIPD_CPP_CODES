#ifndef MYVECTOR_H
#define MYVECTOR_H

#include<iostream>
#include<cstring>

class VectorException {
    std::string message;
public:
    VectorException(const std::string& msg) : message(msg) {}
    std::string getMessage() const { return message; }
};

class MyVector {
    static const int MAX_SIZE = 10;
    // int vector[MAX_SIZE];
    int *vector= new int[MAX_SIZE] ;
    int size;

public:
    MyVector();
    void push(int value);
    int pop();
    bool isEmpty() const;
    bool isFull() const;
    int getSize() const;
};

#endif // MYVECTOR_H
