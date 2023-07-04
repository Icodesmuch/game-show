#include "Contestant.h"

// constructors
Contestant::Contestant()
{
    playerNumber = 0;
    playerName = "";
    playerGrandTotal = 0;
}

Contestant::Contestant(int playerNumber, std::string playerName, int playerGrandTotal)
{
    this->playerNumber = playerNumber;
    this->playerName = playerName;
    this->playerGrandTotal = playerGrandTotal;
}

Contestant::Contestant(const Contestant &contestant)
{
    this->playerNumber = contestant.playerNumber;
    this->playerName = contestant.playerName;
    this->playerGrandTotal = contestant.playerGrandTotal;
}

// playerNumber mutator
void Contestant::setPlayerNumber(const int playerNumber)
{
    this->playerNumber = playerNumber;
}

// playerName mutator
void Contestant::setPlayerName(const std::string playerName)
{
    this->playerName = playerName;
}

// playerGrandTotal mutator
void Contestant::setPlayerGrandTotal(const int playerGrandTotal)
{
    this->playerGrandTotal = playerGrandTotal;
}

// playerNumber accessor
const int &Contestant::getPlayerNumber() const
{
    return this->playerNumber;
}

// playerName accessor
const std::string &Contestant::getPlayerName() const
{
    return this->playerName;
}

// playerGrandTotal accesor
const int &Contestant::getPlayerGrandTotal() const
{
    return this->playerGrandTotal;
}

// display player attributes
void Contestant::displayPlayerDetails() const
{
    std::cout << "\n\tPlayer Details\n";
    std::cout << "Player Name: " << this->playerName << '\n';
    std::cout << "Player Number: " << this->playerNumber << '\n';
    std::cout << "Player GrandTotal: " << this->playerGrandTotal << '\n';
}
