#include "electronicitem.h"
#include "laptop.h"

int main() {
    // Create instances of ElectronicItem and Laptop
    ElectronicItem* item = new ElectronicItem("GADA Electronics", 499.99);
    Laptop* laptop = new Laptop("XYZ Computers", 1299.99, "Intel i7");
    ElectronicItem* p1 =new Laptop();


    // Display information about the items
    // item->display();
    // laptop->display();
    p1->display();

    // Clean up memory
    delete item;
    delete laptop;

    return 0;
}
