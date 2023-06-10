#include<iostream>
#include"Inventory.h"

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

template<class T>
MyStack<T>::MyStack()
{
    size=5;
    s = new T[size];
}

template<class T>
void MyStack<T>::push(T element)
{
    try
    {
        if(top==size)
        {
            throw 0;
        }
        else
        {
            s[top++]=element;
        }
    }
    catch(int a)
    {
        std::cout<<"\nStack Full!!";
    }
    
    
}

template<class T>
void MyStack<T>::pop()
{
    try
    {
        if(top==0)
        {
            throw 0;
        }
        else
        {
            --top;
            std::cout<<s[top]<<std::endl;;
        }
    }
    catch(int a)
    {
        std::cout<<"\nStack is empty !!";
    }
    
}

template<class T>
void MyStack<T>::display()
{
    for(int i=0;i<size;i++)
    {
        std::cout<<s[i]<<"    ";
    }
}


template<class T>
MyStack<T>::~MyStack()
{
    delete s;
}


int main()
{
    // MyStack<int>v1;
    // v1.push(10);
    // v1.push(20);
    // v1.push(30);
    // v1.push(40);
    // v1.push(50);
    // v1.push(60);
    // v1.display();
    // v1.pop();
    // v1.pop();

    // Inventory obj,obj1,obj2;
    // MyStack<Inventory> v2;
    // v2.push(obj);
    // v2.push(obj1);
    //v2.display();

    MyStack<char>v2;
    v2.push('a');
    v2.push('b');
    v2.push('c');
    v2.pop();
    v2.pop();
    v2.pop();
    
}