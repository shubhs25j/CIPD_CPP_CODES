#include <iostream>
#include "enggstudent.h"

int main()
{
    Student *s = new Enggstudent;
    s->accept();
     s->display();
    s->calculateScore();
    
}
