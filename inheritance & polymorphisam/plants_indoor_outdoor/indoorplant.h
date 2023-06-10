#ifndef INDOORPLANT_H
#define INDOORPLANT_H

#include "plant.h"
#include <string>

class IndoorPlant : public Plant {
public:
    IndoorPlant(const std::string& name, const std::string& type, const std::string& location);
    void display() const override;
private:
    std::string location;
};

#endif // INDOORPLANT_H
