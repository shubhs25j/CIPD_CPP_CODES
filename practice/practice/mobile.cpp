#include <iostream>
#include <string>

class Mobile
{

    int Model_number;
    std::string name_of_model;
    int sim_slot;
    float price;

public:
    Mobile()
    {
        Model_number = 00;
        name_of_model = "null";
        sim_slot = 0;
        price = 00.00;
    }

    Mobile(int M_n, std::string mname, int s, char p) : Model_number(M_n), name_of_model(mname), sim_slot(s), price(p){};
    void show()
    {

        std::cout << "Model NO:" << Model_number << std::endl;
        std::cout << "Model Name:" << name_of_model << std::endl;
        std::cout << "Sim_slot" << sim_slot << std::endl;
        std::cout << "Price:" << price << std::endl;
        std::cout << std::endl;
    }

    int GetModelNo() const { return Model_number; }
    void setModelNo(int modelNo) { Model_number = modelNo; }
    std::string GetModelName() const { return name_of_model; }
    void setModelName(const std::string &modelName) { name_of_model = modelName; }
    int GetSimSlot() const { return sim_slot; }
    void setSimSlot(int simSlot) { sim_slot = simSlot; }
    float getPrice() const { return price; }
    void setPrice(float price_) { price = price_; }
};
void global_call()
{

    Mobile m5(9231, "samsung y-23", 2, 33334.51);

    std::cout << m5.GetModelNo() << std::endl;

    std::cout << m5.GetModelName() << std::endl;

    std::cout << m5.GetSimSlot() << std::endl;

    std::cout << m5.getPrice() << std::endl;
}

int main()

{
    Mobile m1;

    m1.show();

    Mobile m2(1753, "Iphone X", 1, 88976.44);

    m2.show();

    Mobile *m3 = new Mobile(5232, "redmi Note 7", 2, 22344.66);

    m3->show();

    Mobile mtarr[3]{Mobile(4533, "Reamlme xt", 2, 30000.00), Mobile(4342, "OnePlus 7T", 2, 39000.00), Mobile(5234, "Iphone", 1, 122250.00)};

    for (Mobile i : mtarr)

    {

        i.show();
    }

    Mobile *mtptr = new Mobile[3]{Mobile(6324, "Oppo s2", 2, 15577.88), Mobile(7234, "Realme 7", 2, 23345.33), Mobile(8423, "Redmi Note10", 2, 23423.64)};

    for (int i = 0; i < 3; i++)

    {

        mtptr[i].show();
    }

    global_call();
    for (int i = 0; i < 3; i++)

    {

        delete[] mtptr;
    }
    delete m3;
    return 0;
}