#ifndef __BOOK
#define __BOOK
#include<iostream>
#include<cstring>
void fun();
class Book
{
    std::string title;
    static int bookId;
    int sr_no;
    std::string author_name;
    int year_of_publish;
    int pages;
    static int count;
    public:
    Book()
    {
        bookId++;
        sr_no=bookId;
        title ="let us c";
        author_name="yashwant kanetkar";
        year_of_publish= 2007;
        pages=300;
        count++;
    }
    Book(std::string tit,std::string author,int y,int pag)
    {
        bookId++;
        sr_no=bookId;
        title=tit;
        author_name=author;
        year_of_publish=y;
        pages=pag;
        count++;
    }
    void show();

    std::string getTitle() const { return title; }
    void setTitle(const std::string &title_) { title = title_; }

    std::string authorName() const { return author_name; }
    void setAuthorName(const std::string &authorName) { author_name = authorName; }

    int yearOfPublish() const { return year_of_publish; }
    void setYearOfPublish(int yearOfPublish) { year_of_publish = yearOfPublish; }

    int getPages() const { return pages; }
    void setPages(int pages_) { pages = pages_; }

};
#endif