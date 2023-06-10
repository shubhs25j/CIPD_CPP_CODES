#ifndef MYSTACK_H
#define MYSTACK_H

#include<iostream>


template<class T>
class MyStack
{
private:
    int size;
    int top=0;
    T* s;
public:
    MyStack();

    void push(T);

    void pop();

    void display();

    ~MyStack();
};








#endif