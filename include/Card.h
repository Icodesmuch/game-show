#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <fstream>
#include <vector>

class Card
{
private:
    std::string cardType;
    int cardValue;

public:
    // constructor
    Card() {}
    Card(std::string cardType, int cardValue) {}
    Card(const Card &card_) {}

    // setters
    void setCardType(const std::string cardType) {}
    void setCardValue(const int cardValue) {}

    // getters
    const std::string &getCardType() const {}
    const int &getCardValue() const {}

    // display
    void display() const {}

    // saves card to file
    void saveToFile() const {}

    // stores and returns cards in the file
    std::vector<Card> readFromFile(const std::string &filename) const {}
};

#endif