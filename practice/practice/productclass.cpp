#include<iostream>
#include<cstring>
class product
{
int productno;
double price;
//char name[20];
std::string name;
public:
product()
{
    productno=1;
    price=10;
    name="pen";
    
}
product(int no,double pri)
{
    productno = no;
    price=pri;
}
void show()
{
    std::cout<<"product number is "<<productno<<"\n";
    std::cout<<"product price is "<<price<<"\n";
     std::cout<<"product price is "<<name<<"\n";

}

int getProductno() const { return productno; }
void setProductno(int productno_) { productno = productno_; }

double getPrice() const { return price; }
void setPrice(double price_) { price = price_; }
};

void fun()
{
    product p3;
    std::cout<<p3.getProductno()<<"\n";
    std::cout<<p3.getPrice()<<"\n";
}
int main()
{
    product *p = new product; // Heap memory (Always use heap memory )
    p->show();
    delete p;//delete the pointer of address in heap memory 
    product p1; // stack memory
    p1.show();
    product p2(2,356);
    p2.show();
    /*
    whenever the object is created 
    1} memory is allocated
    2}constructor is called
    3} object gets initilized
    */
   product *ptr = new product[3]; // creating a arry of objects 
   for(int i=0;i<3;i++)
   ptr[i].show();   

   product *pr=new product[3]{product(2,3),product(3,4),product(4,5)};
    for(int i=0;i<3;i++)
   pr[i].show();  

   for(int i=0;i<3;i++)
   {
   delete pr;
   delete ptr;
   }


}