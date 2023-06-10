#include<iostream>

class MyQueue {
    int  size=10;
    int *ptr= new int[size];
    int front;
    int rear;

public:
    MyQueue();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    bool isFull();
};