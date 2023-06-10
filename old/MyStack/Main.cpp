#include"MyStack.h"
//#include"D:\CPPDemo\vscode\CPP Marathon\Inventory\Inventory.h"
#include"Inventory.h"

int main()
{
    MyStack<int>v1;
    v1.push(10);
    v1.push(20);
    v1.push(30);
    v1.push(40);
    v1.push(50);
    v1.display();
    v1.pop();
    v1.pop();

    // Inventory obj,obj1,obj2;
    // MyStack<Inventory> v2;
    // v2.push(obj);
    // v2.push(obj1);
    // v2.display();
    
}