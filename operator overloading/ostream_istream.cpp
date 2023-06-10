
#include<iostream>
class date
{
    int day,month,year;
    public:
    friend std::ostream& operator<<(std::ostream& os ,const date& dt);
    friend std::istream& operator>>(std::istream& is, date& dt);
    date(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    date(){}
};
std::ostream& operator<<(std::ostream& os ,const date& dt)
{
    os<<dt.day<<'/'<<dt.month<<'/'<<dt.year<<"\n";
    return os;
}
std::istream& operator>>(std::istream& is, date& dt)
{
    std::cout<<"Enter day\n";
    is >>dt.day;
    std::cout<<"Enter month\n";
    is >>dt.month;
    std::cout<<"Enter year\n";
    is>>dt.year;
}
int main()
{
    date d1(29,5,2023);
    std::cout <<d1;
    date d2;
    std::cin>>d2;
    std::cout<<d2;

}