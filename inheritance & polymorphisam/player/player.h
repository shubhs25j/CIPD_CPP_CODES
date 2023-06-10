#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cstring>

class Player
{
    int playerId;
    std::string PlayerName;
    int level;

public:
    Player();
    Player(int id, std::string name, int level) : playerId(id), PlayerName(name), level(level) {}
   virtual void display();
   virtual void accept();
   ~Player(){}

    int getPlayerId() const { return playerId; }
    void setPlayerId(int playerId_) { playerId = playerId_; }

    std::string playerName() const { return PlayerName; }
    void setPlayerName(const std::string &playerName) { PlayerName = playerName; }

    int getLevel() const { return level; }
    void setLevel(int level_) { level = level_; }
};

#endif // PLAYER_H
