#include<stdio.h>
struct  student
{
    int roll_num;
    char name[20];
    double marks;
};
void display(struct student s1)
{
    printf("%d %s %lf",s1.roll_num,s1.name,s1.marks);
}

int main()
{
  struct  student s1={25,"shubham",90};
   display(s1);
  return 0;
  
}