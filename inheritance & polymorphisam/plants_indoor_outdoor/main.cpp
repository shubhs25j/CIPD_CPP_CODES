#include "plant.h"
#include "indoorplant.h"

int main() {
    // Create instances of Plant and IndoorPlant
    Plant* plant = new Plant("Sunflower", "Annual");
    IndoorPlant* indoorPlant = new IndoorPlant("snake Plant", "Perennial", "Living Room");

    // Display information about the objects
    plant->display();
    indoorPlant->display();

    // Clean up memory
    delete plant;
    delete indoorPlant;

    return 0;
}
