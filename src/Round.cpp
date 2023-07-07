#include "Round.h"
// constructors
Round::Round()
{
    this->roundCategory = "";
    this->roundPuzzle = "";
    this->roundTotal = 0;
}

Round::Round(std::string roundCategory, std::string roundPuzzle)
{
    this->roundCategory = roundCategory;
    this->roundPuzzle = roundPuzzle;
    this->roundTotal = roundTotal;
}

Round::Round(Round &round)
{
    this->roundCategory = round.roundCategory;
    this->roundPuzzle = round.roundPuzzle;
    this->roundTotal = round.roundTotal;
}

// mutators
void Round::setRoundCategory(const std::string roundCategory)
{
    this->roundCategory = roundCategory;
}
void Round::setRoundPuzzle(const std::string roundPuzzle)
{
    this->roundPuzzle = roundPuzzle;
}
void Round::setRoundTotal(const int roundTotal)
{
    this->roundTotal = roundTotal;
}

// accessors
const std::string &Round::getRoundCategory() const
{
    return this->roundCategory;
}
const std::string &Round::getRoundPuzzle() const
{
    return this->roundPuzzle;
}
const int &Round::getRoundTotal() const
{
    return this->roundTotal;
}

// display
void Round::display() const
{
    std::cout << "Category: " << roundCategory << std::endl;
    std::cout << "Puzzle: " << roundPuzzle << std::endl;
    std::cout << "Total: " << roundTotal << std::endl;
}

// read round from file
Round Round::readFromFile(const std::string &fileName)
{
    std::ifstream inputFile(fileName);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open file \"" << fileName << "\"" << std::endl;
    }

    // Count the number of lines in the file
    int numLines = 0;
    std::string line;
    while (std::getline(inputFile, line))
    {
        ++numLines;
    }

    // Reset the file stream and generate a random line number
    inputFile.clear();
    inputFile.seekg(0);
    std::srand(std::time(nullptr));
    int randomLineNum = std::rand() % numLines;

    // Read the selected line
    for (int i = 0; i < randomLineNum; ++i)
    {
        std::getline(inputFile, line);
    }

    std::string category, puzzle;

    std::istringstream ss(line);
    ss >> category;
    std::getline(ss >> std::ws, puzzle);

    Round round;
    round.setRoundCategory(category);
    round.setRoundPuzzle(puzzle);
    return round;
}