#include<iostream>
#include<cstring>
class Book
{
    std::string title;
    std::string author_name;
    int year_of_publish;
    int pages;
    public:
    Book()
    {
        title ="let us c";
        author_name="yashwant kanetkar";
        year_of_publish= 2007;
        pages=300;
    }
    Book(std::string tit,std::string author,int y,int pag)
    {
        title=tit;
        author_name=author;
        year_of_publish=y;
        pages=pag;
    }
    void show()
    {
        std::cout<<"The title of book is"<<title<<"\n";
        std::cout<<"The author of the book is"<<author_name<<"\n";
        std::cout<<"The publishing year of book is "<<year_of_publish<<"\n";
        std::cout<<"The book is "<<pages <<" no of pages "<<"\n";
    }

    std::string getTitle() const { return title; }
    void setTitle(const std::string &title_) { title = title_; }

    std::string authorName() const { return author_name; }
    void setAuthorName(const std::string &authorName) { author_name = authorName; }

    int yearOfPublish() const { return year_of_publish; }
    void setYearOfPublish(int yearOfPublish) { year_of_publish = yearOfPublish; }

    int getPages() const { return pages; }
    void setPages(int pages_) { pages = pages_; }

};
void fun()
{
    Book b3;
     std::cout<<"The title of book is"<<b3.getTitle()<<"\n";
        std::cout<<"The author of the book is"<<b3.authorName()<<"\n";
        std::cout<<"The publishing year of book is "<<b3.yearOfPublish()<<"\n";
        std::cout<<"The book is "<<b3.getPages()<<" no of pages "<<"\n";
    
}
int main()
{
    Book b1;
    b1.show();
    Book *b2=new Book;
    b2->show();


}