#include<iostream>
#include<cstring>
#include"MyQueue.h"

MyQueue::MyQueue() {
    front = -1;
    rear = -1;
}
void MyQueue::enqueue(int value) {
    if (isFull()) {
       std::cout<<"Queue overflow";
    }
    if (isEmpty()) {
        front = 0;
    }
    rear=(rear + 1) % size;
    ptr[rear] = value;
}

int MyQueue::dequeue() {
    if (isEmpty()) {
        std::cout<<"Queue underflow";
    }
    int value = ptr[front];
    if (front==rear) {
        front=rear = -1;
    } else {
        front=(front + 1)% size;
    }
    return value;
}

bool MyQueue::isEmpty() {
    return front== -1 && rear == -1;
}

bool MyQueue::isFull(){
    return (rear + 1) % size== front;
}