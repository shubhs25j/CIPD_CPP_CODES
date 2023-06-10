#ifndef TEST_H
#define TEST_H

#include<iostream>

enum SIZE
{
    SMALL,MEDIUM,LARGE
};

class Bag
{
    int price;
    std::string bagcolour;
    enum SIZE bagsize;
    public:
    Bag();
    Bag(int pr,std::string col,enum SIZE s);
    void show();

};
void showenumdata(enum SIZE bagsize);

#endif // TEST_H
