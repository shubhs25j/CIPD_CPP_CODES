#include <iostream>
#include "Queue.h"

int main() {
    try {
        MyQueue queue;

        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);

        std::cout << "Dequeued value: " << queue.dequeue() << std::endl;
        std::cout << "Dequeued value: " << queue.dequeue() << std::endl;
        std::cout << "Dequeued value: " << queue.dequeue() << std::endl;
        std::cout << "Dequeued value: " << queue.dequeue() << std::endl; // Throws QueueException

    } catch (const QueueException& ex) {
        std::cerr << "Exception: " << ex.getMessage() << std::endl;
    }

    return 0;
}
