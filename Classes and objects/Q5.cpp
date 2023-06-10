#include <iostream>
#include <cstring>
class Faculty
{
    int Id;
    std::string name;
    char post;
    std::string qualification;
    std::string adress;

public:
    void getdata()
    {
        std::cout << "Enter Id of faculty\n";
        std::cin >> Id;
        std::cout << "Enter name \n";
        std::cin >> name;
        std::cout << "Enter post \n";
        std::cin >> post;
        std::cout << "Enter qualification \n";
        std::cin >> qualification;
        std::cout << "Enter address \n";
        std::cin >> adress;
    }
    void displaydata()
    {
        std::cout << "The id is : " << Id << "\n";
        std::cout << "the name is " << name << "\n";
        std::cout << "The post is : " << post << "\n";
        std::cout << "The qualification is :" << qualification << "\n";
        std::cout << "The adress is : " << adress << "\n";
    }
};
int main()
{
    Faculty f1;
    f1.getdata();
    f1.displaydata();
    Faculty *f2=new Faculty;
    f2->getdata();
    f2->displaydata();
    delete f2;

}