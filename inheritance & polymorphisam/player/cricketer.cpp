#include<iostream>
#include<cstring>
#include"cricketer.h"

Cricketer ::Cricketer()
{
    teamName="";
    role="";
}
Cricketer::Cricketer(int id, std::string name, int level,std::string team,std::string  role)
     :Player(id,name,level),teamName(team),role(role)
     {
     }
void Cricketer::display()
{
    Player::display();
    std::cout<<"Team Name is : "<<teamName<<"\n";
    std::cout<<"The role is: "<<role<<"\n";
}
void Cricketer:: play()
{
    std::cout<<"Yes Played national\n";
}
void Cricketer :: accept()
{
   
    std::cout<<"Enter the team name of palyer \n";
    std::cin>>teamName;
    std::cout<<"Enter the role of player \n";
    std::cin>>role;

    Player::accept();
}
