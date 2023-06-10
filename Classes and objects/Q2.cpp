#include<iostream>
class Vector
{
  int size;
  int *coord;
  public:
  Vector();
  void modify();
  void display();
  void multiply();
};
Vector::Vector()
{
    std::cout<<"\nEnter number of co-ordinates ";
    std::cin>>size;
    coord = new int[size];
    std::cout<<"\nEnter "<<size<<" Co-ordinates\n";
    for(int i=0;i<size;i++)
    {
        std::cout<<" ";
        std::cin>>coord[i];
    }
}
void Vector::modify()
{
     std::cout<<"\nEnter "<<size<<" of new Co-ordinates\n";
     for(int i=0;i<size;i++)
     { 
        std::cout<<" ";
         std::cin>>coord[i];

     }
}
void Vector::multiply()
{
    int num;
    std::cout<<"\n Enter number to multiplya ";
    std::cin>>num;
    for(int i=0;i<size;i++)
    {
        coord[i]=coord[i]*num;
    }
}
void Vector::display()
{
    std::cout<<"\nVector:(";
    for(int i=0;i<size;i++)
    {
        std::cout<<coord[i];
        if(i != size-1)
        std::cout<<","; 
    }
    std::cout<<")";
}
int main()
{
    Vector v;
    v.display();
    v.modify();
    v.display();
    v.multiply();
    v.display();
    return 0;
}