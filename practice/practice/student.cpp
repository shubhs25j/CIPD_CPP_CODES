#include<iostream>
#include<cstring>
class student
{
    int roll_no;
    double marks;
    std::string name;
    public:
    student()
    {
        roll_no=1;
        marks=90;
        name="shubham";
    }
    student(int rno,double m,std::string n)
    {
        roll_no=rno;
        marks=m;
        name=n;
    }
    // student(int rno,double m,std::string n):roll_no(rno),marks(m),name(n)
    // {

    // }

    void display()
    {
        std::cout<<"The roll number of student is "<<roll_no<<"\n";
         std::cout<<"The marks  of student is "<<marks<<"\n";
          std::cout<<"The Name of student is "<<name<<"\n\n";
    }

    // int rollNo() const { return roll_no; }
    // void setRollNo(int rollNo) { roll_no = rollNo; }

    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    int rollNo() const { return roll_no; }
    void setRollNo(int rollNo) { roll_no = rollNo; }
    

};
void fun()
{
    student s4;
    std::cout<<"The roll number of student is "<<s4.rollNo()<<"\n";
         std::cout<<"The marks  of student is "<<s4.getMarks()<<"\n";
          std::cout<<"The Name of student is "<<s4.getName()<<"\n\n";
}

int main()
{
    student s1;
    s1.display();
    student s2(2,80,"ram");
    s2.display();
    student *s3 = new student;
    s3->display();
    delete s3;
    fun();

}