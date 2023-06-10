#include<iostream>

class Mystack
{
    int size;
    int *arr;
    int top=-1;
    public:
    Mystack();// default constructor
    ~Mystack()//destructor 
    {
        delete []arr;
    }
    Mystack(int siz);//parameter constructor
    void accept();
    void display();
    void push(int a);
    void pop();
   
};