#include<iostream>
#include"Mystack.h"
int main()
{
    Mystack m1;
    // m2.display();
    // m1.accept();
    // m1.display();
    int num;
    std::cout<<"press 1 to pop the element\n";
    std::cout<<"Press 2 to Push the element\n ";
    std::cin>>num;
    switch (num)
    {
        case 1:
            m1.pop();
            break;
        case 2:
            int element;
            std::cout << "Enter the element to push: ";
            std::cin >> element;
            m1.push(element);
            break;
        default:
            std::cout << "Invalid choice!";
            break;
    }

    // m1.pop();
    // m1.pop();
    // m1.pop();
    // m1.push(4);
    // m1.push(2);
    // m1.push(5);
    // m1.display();
    // m1.pop();
    // m1.pop();
    // m1.pop();
    // m1.push(4);
    // m1.push(2);
    // m1.push(5);
    // m1.display();
    return 0;
}