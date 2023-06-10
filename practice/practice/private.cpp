#include<iostream>
class sample
{
    static int roll;
    int rollno;
    double marks;
    std::string name;
    public:
    sample()
    {
        roll++;
        rollno=roll;
        marks=0;
        name="student";
    }
    sample( double mar,std::string Name)
    {
        roll++;
        rollno=roll;
        marks=mar;
        name=Name;
    }

    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }

    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }
};
int sample :: roll=0; 
void display()
{
    sample s1(99,"shubham");
    std::cout<<s1.getMarks()<<"\n";
    std::cout<<s1.getName()<<"\n";
     std::cout<<s1.getRollno()<<"\n";   
}
int main()
{
    display();
}