#ifndef PLANT_H
#define PLANT_H

#include <string>

class Plant {
public:
    Plant(const std::string& name, const std::string& type);
    virtual ~Plant();
    virtual void display() const;
protected:
    std::string name;
    std::string type;
};

#endif // PLANT_H
