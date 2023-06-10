#include <iostream>
#include <cstring>
class Book
{
    std::string *author;
    std::string *title;
    int *price;
    std::string *publishare;
    int *stock_position;
    int size = 5;

public:
    Book()
    {

        author = new std::string[size];
        title = new std::string[size];
        price = new int[size];
        publishare = new std::string[size];
        stock_position = new int[size];

        author[0] = "yashwant kanetkar";
        title[0] = "let us c";
        price[0] = 380;
        publishare[0] = "classmet";
        stock_position[0] = 5;

        author[1] = "E balagurusamy";
        title[1] = "object oriented programing";
        price[1] = 640;
        publishare[1] = "mc Graw";
        stock_position[1] = 5;

        author[2] = "vaishnav patil";
        title[2] = "how to stay on CIPD ";
        price[2] = 999;
        publishare[2] = "KPIT";
        stock_position[2] = 2;
    }
    
    int find_By_title_author(std::string auth, std::string tit)
    {
        for (int i = 0; i < size; i++)
        {
            if (auth == author[i] && tit == title[i])
            {
                int copies;
                std::cout << "The Book is available\nplease enter your requid copyes\n";
                std::cin >> copies;
                if (stock_position[i] >= copies)
                {
                    std::cout << "Yes coipes are availabale your grand total is " << copies * price[i] << " Rs \n";
                    return i;
                }
                else
                {
                    std::cout << "Sorry the quantity is not avalabal\n";
                    exit(0);
                }

            }
        }
    }
    void buy(int i)
    {
        std::cout<<"The book name is "<<author[i]<<"\n";
        // std::cout<<"The grand total is "<<price<<"\n";
        int copies;
        std::cout << "please enter your requid copyes\n";
        std::cin >> copies;
         if (stock_position[i] >= copies)
         {
            std::cout << "your grand total is " << this->price[i] * copies << " Rs \n";
         }
         else
                {
                    std::cout << "Sorry the quantity is not avalabal\n";
                    exit(0);
                }
        
        // for (int i = 0; i < size; i++)
        // {
        //     if (auth == author[i] && tit == title[i])
        //     {
        //         int copies;
        //         std::cout << "The Book is available\nplease enter your requid copyes  \n";
        //         std::cin >> copies;
        //         if (stock_position[i] >= copies)
        //         {
        //             std::cout << "your grand total is " <<copies * price[i]  << "\n";
        //             stock_position[i] = stock_position[i] - copies;
        //         }
        //         else
        //             std::cout << "Sorry the quantity is not avalabal\n";
        //     }
        // }
    }
};
int main()
{
    Book b1;
    
    int i= b1.find_By_title_author("E balagurusamy", "object oriented programing");
    b1.buy(i);
    // b1.buy("E balagurusamy", "object oriented programing");
    // b1.addbook("shubham","Cpp",1000,"kpit",10);
    
}