#include<iostream>
#include<cstring>
#include"player.h"

void Player::display()
{
    std::cout<<"The PlayerId is : "<<playerId<<"\n";
    std::cout<<"Name of playe is: "<<PlayerName<<"\n";
    std::cout<<"The level of player is : "<<level<<"\n";
}
Player::Player()
{
    playerId = 0;
    PlayerName = "";
    level=0;
}
void Player::accept()
{
    std::cout<<"Enter the Id of player\n";
    std::cin>>playerId;
    std::cout<<"Enter the name of player\n";
    std::cin>>PlayerName;
    std::cout<<"ENter the level of player\n";
    std::cin>>level;

}