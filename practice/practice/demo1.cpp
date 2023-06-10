#include<iostream>
#include<cstring>
class faculty
{
    static int idno;
    int Id;
    std::string name;
    std::string post;
    std::string qualidication;
    std::string address;
    public:
    faculty()
    {
        idno++;
        Id=idno;
        std::cout<<"Enter name of faculty\n";
        std::cin>>name;
        std::cout<<"what is the post the faculty\n";
        std::cin>>post;
        std::cout<<"Qualification of Faculty\n";
        std::cin>>qualidication;
        std::cout<<"Address of faculty\n";
        std::cin>>address;
        std::cout<<"\n\n";
    }
    faculty(std::string n, std::string p,std::string quali,std::string addr)
    {
        idno++;
        Id=idno;
        name=n;
        post=p;
        qualidication=quali;
        address=addr;
    }
    void display()
    {
        std::cout<<"The ID is "<<Id<<"\n";
        std::cout<<"The name of faculty is "<<name<<"\n";
        std::cout<<"The post of faculty is "<<post<<"\n";
        std::cout<<"The qualification is "<<qualidication<<"\n";
        std::cout<<"The address is "<<address<<"\n";
    }
};
int faculty:: idno=0; 
int main()
{
    faculty f1;
    f1.display();
}