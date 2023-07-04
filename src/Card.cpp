#include "Card.h"

Card::Card()
{
    this->cardType = "";
    this->cardValue = 0;
}

Card::Card(std::string cardType, int cardValue)
{
    this->cardType = cardType;
    this->cardValue = cardValue;
}

Card::Card(const Card &card)
{
    this->cardType = card.cardType;
    this->cardValue = card.cardValue;
}

// cardType mutator
void Card::setCardType(const std::string cardType)
{
    this->cardType = cardType;
}

// cardValue mutator
void Card::setCardValue(const int cardValue)
{
    this->cardValue = cardValue;
}
// cardType accessor
const std::string &Card::getCardType() const
{
    return this->cardType;
}

// cardValue accessor
const int &Card::getCardValue() const
{
    return this->cardValue;
}
// display card attributes
void Card::display() const
{
    std::cout << "Card Type: " << this->cardType << '\n';
    std::cout << "Card Value: " << this->cardValue << std::endl;
}

void Card::saveToFile() const
{

    std::ofstream outFile("cards.txt", std::ios::app);
    if (outFile.is_open())
    {
        outFile << cardType << " " << cardValue << std::endl;
        outFile.close();
        std::cout << "Card saved to file successfully." << std::endl;
    }
    else
    {
        std::cerr << "Unable to open file for saving card." << std::endl;
    }
}

std::vector<Card> Card::readFromFile(const std::string &filename) const
{

    std::vector<Card> cards;

    std::ifstream inFile(filename);
    if (!inFile)
    {
        std::cerr << "Error opening file " << filename << std::endl;
        return cards;
    }

    std::string cardType;
    int cardValue;

    while (inFile >> cardType >> cardValue)
    {
        Card card(cardType, cardValue);
        cards.push_back(card);
    }

    inFile.close();
    return cards;
}