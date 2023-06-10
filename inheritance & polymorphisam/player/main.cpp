#include<iostream>
#include<cstring>
#include"cricketer.h"

int main()
{
    Player *p1 = new Cricketer;
    p1->accept();
    p1->display();
    // Cricketer *c1 = dynamic_cast<Cricketer*>(p1);
    // c1->play();
    
}