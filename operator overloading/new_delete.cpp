#include<iostream>
class student
{
    std::string name;
    int age;
    public:
    student()
    {
        std::cout<<"constructor is called\n";
    }
    student(std::string n ,int a)
    {
        name=n;
        age=a;
    }
    void display()
    {
        std::cout<<"The name is : "<<name<<"\n";
        std::cout<<"The age is : "<<age<<"\n";
    }
    void *operator new(size_t size)
    {
        std::cout<<"Overloading new operator with size : "<<size<<"\n";
        void *p=::operator new(size);
        //void *pmalloc(size);will also work fine
        return p;
    }
    void operator delete(void *p)
    {
        std::cout<<"Overloading delete Operator\n";
        free(p);
    }
};
int main()
{
    student *p=new student("shubham",23);
    p->display();
    delete p;
}