#include<iostream>
#include<cstring>
#include"vehicalPolicy.h"

int main()
{
    const int maxNmOfPolicy=100;
    Vehical_policy vehical[maxNmOfPolicy];
    int numOfPolicy=0;
    int choice;
    while (true)
    {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Insert record" << std::endl;
        // std::cout << "2. Update information" << std::endl;
        std::cout << "2. Display all records" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if(numOfPolicy>=maxNmOfPolicy)
            {
            std::cout<<"Maximun policys reached\n";
            return 0;
            }
            else
            {
                Vehical_policy v1;
                v1.accept();
                vehical[numOfPolicy]=v1;
                numOfPolicy++;
            }
            break;
        }
        case 2:
        {
            if(numOfPolicy==0)
            {
                std::cout<<"NO record to displya\n";
            }
            else
            {
                for(int i=0;i<numOfPolicy;i++)
                {
                    vehical[i].display();
                }
            }
            break;
        }
        case 3:
        {
            std::cout<<"Exiting the program\n";
            return 0;
            break;
        }
        
        default:
        std::cout<<"Invalid choice please try again\n";
            break;
        }
    }
    

}