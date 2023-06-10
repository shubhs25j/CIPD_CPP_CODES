#ifndef MYQUEUE_H
#define MYQUEUE_H

#include<iostream>
#include<cstring>

class QueueException {
    std::string message;
public:
    QueueException(const std::string& msg) : message(msg) {}
    std::string getMessage() const { return message; }
};

class MyQueue {
    static const int MAX_SIZE = 10;
    int queue[MAX_SIZE];
    int front;
    int rear;

public:
    MyQueue();
    void enqueue(int value);
    int dequeue();
    bool isEmpty() const;
    bool isFull() const;
};

#endif // MYQUEUE_H
