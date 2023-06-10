#include<iostream>
#include<cstring>
class Binary
{
    std::string S;
    public:
    Binary()
    {
        S="1010";
    }
    Binary(std::string binary)
    {
        S=binary;
    }
    void chk_bin()
    {
        for(int i=0;i<S.length();i++)
        {
            if(S.at(i)!='0'&& S.at(i)!='1')
            {
                std::cout<<"Incorrect Binary number... this program will quite\n";
                exit(0);
            }
        }
    }
    void ones_compemrnt()
    {
        chk_bin();
        for(int i=0;i<S.length();i++)
        {
            if(S.at(i)=='1')
            {
                S.at(i)='0';
            }
            else
            S.at(i)='1';
        }
        std::cout<<S<<"\n";
    }
};
int main()
{
    Binary b1;
    b1.ones_compemrnt();
    Binary *b2 =new Binary("101010101000000000000000000000000000000000000000");
    b2->ones_compemrnt();
}