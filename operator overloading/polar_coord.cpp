#include<iostream>
#include<math.h>
#define pi 3.14
class polar
{
    float r;
    float theta;
    float x;
    float y;
    public:
    polar()
    {
        x=r*cos(theta);
        y=r*sin(theta);
    }
    polar(float R,float Theta)
    {
        r=R;
        theta=Theta;
        x=r*cos(theta);
        y=r*sin(theta);
    }
    void convertback()
    {
        theta=atan(y/x);
        r=sqrt(x*x+y*y);
    }
    polar operator+(polar &p)
    {
        polar p1;
        p1.x=this->x+p.x;
        p1.y=this->y+p.y;
        return p1;
    }
    void display()
    {
        std::cout<<"The value of x and y are: ("<<x<<","<<y<<")";
    }

};
int main()
{
    polar p1(4,pi/2),p2(sqrt(3),pi/6),p3;
    p3=p1+p2;
    p3.convertback();
    p3.display();
}