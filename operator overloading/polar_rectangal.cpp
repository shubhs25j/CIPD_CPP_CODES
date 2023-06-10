#include<iostream>
#include<math.h>
class polar
{
    public:
    float theta ;
    float r;
    
    polar(){}
    void show()
    {
        std::cout<<"Value of theta is :"<<theta<<"\n";
        std::cout<<"Value of r is: "<<r<<"\n";
    }
    polar(float t, float R)
    {
        theta=t;
        r=R;
    }
};
class rectangale
{   
    float x,y;
    public:
    rectangale(){}
    void show ()
    {
        std::cout<<"value of x is: "<<x<<"\n";
        std::cout<<"Value of y is "<<y<<"\n";
    }
    rectangale(polar p)
    {
        x=p.r*cos(p.theta);
        y=p.r*sin(p.theta);
    }

};
int main()
{
    polar p1(13.3,29.0);
    p1.show();
    rectangale r;
    r=p1;
    r.show();
    return 0;
}