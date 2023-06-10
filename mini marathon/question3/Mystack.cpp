#include <iostream>
#include "Mystack.h"

Mystack::Mystack() // default constructor
{
    size = 5;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}
Mystack::Mystack(int siz) // parameter constructor
{
    size = siz;
    arr = new int[size];
}
void Mystack::accept()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the number at " << i + 1 << "\n";
        std::cin >> arr[i];
    }
}
void Mystack::display()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "The number at " << i + 1 << " is: " << arr[i] << "\n";
    }
}
void Mystack::push(int a)
{
    if (top >= size - 1)
        std::cout << "Stack Overflow\n";
    else
    {
           arr[++top] = a;
    }
}
void Mystack::pop()
{
    if (top <= -1)
    {
    }
    else
    {
        std::cout << "The popped element is " << arr[top--] << "\n" ;
    }
}
