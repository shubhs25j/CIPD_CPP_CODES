#include<iostream>
#include<cstring>
class String
{
    char* p;
    int length;
    public:
    void show()
    {
        std::cout<<p;
    }
    String()//default constructor
    {
        length=0;
        p=nullptr;
    }
    String(const char *s)//constructor with arguments
    {
        length = strlen(s);
        p= new char[length+1];
        strcpy(p,s);
    }
    String(const String &s)//copy constructor
    {
        length=s.length;
        p=new char[length+1];
        strcpy(p,s.p);
        std::cout<<p<<"\n";
    }
    void operator ==(const String &obj)//operator==
    {
        bool equal=true;
        for(int i=0;i<obj.length;i++)
        {
            if(this->p[i]!=obj.p[i])
            {
                equal=false;
            }
        }
        if(equal)
        std::cout<<"String are equal\n";
        else
        std::cout<<"not equal\n";
    }
    String operator+(const String &obj)
    {
        String s;
        s.length=this->length+obj.length;
        s.p=new char[length+1];
        strcpy(s.p,this->p);
        strcat(s.p,obj.p);
        return s;
    }
};
int main()
{
    String s1("shubham"),s2("shubha");
    String s3(s1);//copy constructor called
    s1==s2;//operator == is called
    char a[20]="ashlesha jagadale";
    String s4(a);
    s4.show();
    String *s5=new String(a);
    s5->show();
    delete s5;
    String s6;
    s6=s1+s2;
    s6.show();
}