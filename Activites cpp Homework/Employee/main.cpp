#include<iostream>
#include<cstring>
#include"Employee.h"
int main()
{
    const int max_emp=100;
    Employee emp[max_emp];
    int numofemp=0;
    int choice;
    while(true)
    {
        std::cout<<"Menu\n";
        std::cout<<"1.  Insert Records\n";
        std::cout<<"2.  Update records\n";
        std::cout<<"3.  Display all record\n";
        std::cout<<"4   Exite\n";
        std::cout<<"Enter your choice\n";
        std::cin>>choice;

        switch(choice)
        {
            case 1:{
            if(numofemp>=max_emp)
            {
                std::cout<<"Maximum number of emp reached\n";
            }
            else{
                Employee newEmp;
                newEmp.Accept();
                emp[numofemp]=newEmp;
                numofemp++;
                std::cout<<"Record inserted succesfully\n";
            }
            break;
            }
            case 2:
            {
                int empId;
                bool found=false;
                std::cout<<"Enter emp ID\n";
                std::cin>>empId;
                for(int i=0;i<numofemp;++i)
                {
                    if(emp[i].empId()==empId)
                    {
                        emp[i].Accept();
                        std::cout<<"information updated success\n";
                        found=true;
                        break;
                    }
                }
            }
            case 3:
            {
                if(numofemp=0)
                {
                    std::cout<<"No records to display\n";
                }
                else{
                    for(int i=0;i<=numofemp;++i)
                    {
                        emp[i].Display();
                    }
                }
                break;
            }
            case 4:
            {
                std::cout<<"Exiting program\n";
                return 0;
            }
            default:
            std::cout<<"Invalid choise . please try again \n";
        }
    }
}