#include<iostream>
#include<cstring>
#include"vehicalPolicy.h"

Vehical_policy:: Vehical_policy()
{
    policyId=0;
    vehical_name="";
    amount=0;
}
Vehical_policy:: Vehical_policy(int id,std::string name,int amt)
{
    policyId=id;
    vehical_name=name;
    amount=amt;
}
void Vehical_policy::display()
{;
    std::cout<<"\npolicy Id : "<<policyId;
    std::cout<<"\nVehical Name : "<<vehical_name;
    std::cout<<"\nAmount : "<<amount<<"\n\n";
}
void Vehical_policy ::accept()
{
    std::cout<<"Enter policy Id \n";
    std::cin>>policyId;
    std::cout<<"Enter vehical name \n";
    std::cin>>vehical_name;
    std::cout<<"Enter amount\n";
    std::cin>>amount;
}
