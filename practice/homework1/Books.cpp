#include<iostream>
#include<cstring>
#include"Books.h"
   int Book :: bookId=0;
   int Book :: count=0;
void fun()
{
    Book b3("Object oriented programin","E balagurusamy",2001,500);
    b3.show();
}
    void Book:: show()
    {
        std::cout<<"The title of book is "<<title<<"\n";
        std::cout<<"The author of the book is "<<author_name<<"\n";
        std::cout<<"The publishing year of book is "<<year_of_publish<<"\n";
        std::cout<<"The book is "<<pages <<" no of pages "<<"\n";
        std::cout<<"The book id is "<<bookId<<"\n";
    }
