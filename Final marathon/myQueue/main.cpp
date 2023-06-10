#include<iostream>
#include"MyQueue.h"

int main()
{
    MyQueue queue;

        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);

        std::cout << "Dequeued value: " << queue.dequeue() <<"\n";
        std::cout << "Dequeued value: " << queue.dequeue() <<"\n";
        std::cout << "Dequeued value: " << queue.dequeue() <<"\n";
}