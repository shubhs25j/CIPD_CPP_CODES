#include<iostream>
class point
{
    int x;
    int y;
    public:
    point(int xx, int yy)
    {
        x=xx;
        y=yy;
    }
    point()
    {
        x=0;
        y=0;
    }
    point(point a,point b)
    {
        x=a.x+b.x;
        y=a.y+b.y; 
    }



    void show()
    {
        std::cout<<x<<","<<y<<" \n";
    }
    point operator+(const point &p2);
    point operator-(const point &p2);

    int getX() const { return x; }
    void setX(int x_) { x = x_; }

    int getY() const { return y; }
    void setY(int y_) { y = y_; }
};
point point:: operator+(const point &p2)
{
    point sumobj;
    sumobj.x=this->x+p2.x;
    sumobj.y=this->y+p2.y;
    return sumobj;
}
point point:: operator-(const point &p2)
{
    point minobj;
    minobj.x=this->x-p2.x;
    minobj.y=this->y-p2.y;
    return minobj;
}

int main()
{
    point p1(2,3),p2(3,4),p3,p4;
    p3=p1+p2;
    p4=p2-p1;
    p3.show();
    p4.show();
    point p5(p1,p2);
    p5.show();
}