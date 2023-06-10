#ifndef MYSTACK_H
#define MYSTACK_H

#include<iostream>
#include<cstring>
class StackException {
    std::string message;
public:
    StackException(const std::string& msg) : message(msg) {}
    std::string getMessage() const { return message; }
};

class MyStack {
    static const int MAX_SIZE = 10;
    // int stack[MAX_SIZE];
    int *stack=new int[MAX_SIZE];
    // stack= new int[MAX_SIZE];
    int top;

public:
    MyStack();
    void push(int value);
    int pop();
    bool isEmpty() const;
    bool isFull() const;
};

#endif // MYSTACK_H
