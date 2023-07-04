
#ifndef CONTESTANT_H
#define CONTESTANT_H
#include <iostream>
class Contestant
{
private:
    int playerNumber;
    std::string playerName;
    int playerGrandTotal;

public:
    // constructor
    Contestant() {}
    Contestant(int playerNumber, std::string playerName, int playerGrandTotal) {}
    Contestant(const Contestant &contestant_) {}

    // mutators
    void setPlayerNumber(const int playerNumber) {}
    void setPlayerName(const std::string playerName) {}
    void setPlayerGrandTotal(const int playerGrandTotal) {}

    // accessors
    const int &getPlayerNumber() const {}
    const std::string &getPlayerName() const {}
    const int &getPlayerGrandTotal() const {}

    // display
    void displayPlayerDetails() const {}
};
#endif