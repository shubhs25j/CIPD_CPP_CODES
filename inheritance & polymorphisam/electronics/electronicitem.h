#ifndef ELECTRONICITEM_H
#define ELECTRONICITEM_H

#include <string>

class ElectronicItem {
public:
ElectronicItem(){}
    ElectronicItem(const std::string& brand, double price);
    virtual ~ElectronicItem();
    virtual void display() const;
protected:
    std::string brand;
    double price;
};

#endif // ELECTRONICITEM_H
