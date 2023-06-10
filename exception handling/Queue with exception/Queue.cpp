#include "Queue.h"
#include<iostream>
#include<cstring>

MyQueue::MyQueue() {
    front = rear = -1;
}

void MyQueue::enqueue(int value) {
    if (isFull()) {
        throw QueueException("Queue overflow");
    }
    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = value;
}

int MyQueue::dequeue() {
    if (isEmpty()) {
        throw QueueException("Queue underflow");
    }
    int value = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
    return value;
}

bool MyQueue::isEmpty() const {
    return front == -1 && rear == -1;
}

bool MyQueue::isFull() const {
    return (rear + 1) % MAX_SIZE == front;
}
