#include<iostream>
class DB;
class DM
{
    int meter;
    int centimeter;
    public:
    friend float sum(DM,DB);
    void get_data()
    {
        std::cout<<"Enter the value in meters \n";
        std::cin>>meter;
        std::cout<<"Enter the value in centimeters \n";
        std::cin>>centimeter;
    }
};
class DB{
    int feet ;
    int inch;
    public:
    friend float sum(DM,DB);
    void get_data()
    {
        std::cout<<"Enter the value in feets \n";
        std::cin>>feet;
        std::cout<<"Enter the value in inch \n";
        std::cin>>inch;
    }   
};
float sum(DM a, DB b)
{
    float x,y,z;
    x=a.meter+(a.centimeter/100);
    y=b.feet+(b.inch/12);
    z=x+(y*0.304);
    return z;
}
int main()
{
    DM a;
    DB b;
    a.get_data();
    b.get_data();
    std::cout<<"The sum in Meters is "<<sum(a,b);
}
















// #include<iostream>
// class DB;
// class DM
// {
//     double meter;
//     double centimeter;
//     public:
//     friend void display(DM ,DB );
//     void setvalue(double a, double b)
//     {
//         meter=a;
//         centimeter=b;
//     }
//     void show()
//     {
//         std::cout<<"meter: "<<meter<<"\n";
//         std::cout<<"centimeter :" <<centimeter<<"\n";
//     }
// };
// class DB
// {
//     double feet;
//     double inch;
//     public:
//     friend void display(DM ,DB );
//     void setvalue(double a, double b)
//     {
//         feet=a;
//         inch=b; 
//     }
//     void setinmeter()
//     {

//     }
//     void show()
//     {
//         std::cout<<"feet : "<<feet<<"\n";
//         std::cout<<"inches: "<<inch<<"\n";
//     }
// };
// // void display(DM obj1,DB obj2)
// // {
// //     std::cout<<"meter value is "<<obj1.meter<<"\n";
// //     std::cout<<"centimeter value is "<<obj1.centimeter<<"\n";
// //     std::cout<<"feet value is "<<obj2.feet<<"\n";
// //     std::cout<<"inch value is "<<obj2.inch<<"\n";   
// // }

// int main()
// {
//     DM a1,a2;
//     a1.setvalue(12,34);
//     DB b1,b2;
//     b1.setvalue(23 ,45);
//     display(a1,b1);

// }
