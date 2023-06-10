#ifndef CRICKETER_H
#define CRICKETER_H

#include<iostream>
#include<cstring>
#include"player.h"

class Cricketer :public Player
{
    std::string teamName;
    std::string  role;
    public:
    Cricketer();
    Cricketer(int id, std::string name, int level,std::string team,std::string  role);
    // Cricketer(int id, std::string name, int level,std::string team,std::string  role)
    // :Player(id,name,level),teamName(team),role(role)
    void display();
    void play();
    int netWorth();
    void accept();
    ~Cricketer(){}

    std::string getTeamName() const { return teamName; }
    void setTeamName(const std::string &teamName_) { teamName = teamName_; }

    std::string getRole() const { return role; }
    void setRole(const std::string &role_) { role = role_; }
    
};

#endif // CRICKETER_H
