#include "electronicitem.h"
#include <iostream>

ElectronicItem::ElectronicItem(const std::string& brand, double price)
    : brand(brand), price(price) {}

ElectronicItem::~ElectronicItem() {}

void ElectronicItem::display() const {
    std::cout << "Brand: " << brand << ", Price: Rs" << price << std::endl;
}
