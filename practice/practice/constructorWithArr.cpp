#include<iostream>
#include<cstring>

class String 
{
    char* name;
    int length;
    public:
    String()
    {
        length=0;
        name = new char[length+1];//dynamic memory allocatoin in heap

    }
    String(char* S)
    {
        length = strlen(S);
        name = new char[length+1];//dynamic memory allocation in heap
        strcpy(name,S);
    }
    String(String& x)
    {
        length =x.length;
        name=new char[length+1];
        strcpy(name,x.name);

    }
    void display()
    {
        std::cout<<name<<"\n";
    }
    void joint(String& a,String& b)
    {
        length=a.length+b.length;
        delete name;
        name =new char[length+1];
        strcpy(name,a.name);//copy a.name in name variable
        strcat(name,b.name);//joint name and b.name
    } 
    ~String()
    {
        delete name;
    } 
};
int main()
{
    char* a1="shubham ";
    char* a2="ashlesha ";
    char* a3="jagadale ";
    String s1(a1),s2(a2),s3(a3),s4,s5;
    s4.joint(s2,s1);
    s5.joint(s4,s3);
    s5.display();
    String s6(s5);
    s6.display();
    
}