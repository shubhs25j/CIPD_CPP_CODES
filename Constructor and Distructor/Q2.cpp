#include<iostream>
#include<cstring>

class String
{
    std::string S;
    public:
    String()
    {
        S="";
    }
    String(std::string str)
    {
        S=str;
    }
    void sum(String s1,String s2)
    {
        String s3;
        s3.S=s1.S+s2.S;
        std::cout<<s3.S;
    }
};
int main()
{
    String a1("shubham ");
    String a2(" jagadale");
    String a3;
    // a1=a2;
    // a2=a3;
    a3.sum(a1,a2);
}