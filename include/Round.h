#ifndef ROUND_H
#define ROUND_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream> // for istringstream
#include <ctime>   // for std::time
#include <cstdlib>
class Round
{
private:
    std::string roundCategory;
    std::string roundPuzzle;
    int roundTotal;

public:
    // constructors
    Round() {}
    Round(std::string roundCategory, std::string roundPuzzle) {}
    Round(Round &round_) {}

    // mutators
    void setRoundCategory(const std::string roundCategory) {}
    void setRoundPuzzle(const std::string roundPuzzle) {}
    void setRoundTotal(const int roundTotal) {}

    // accessors
    const std::string &getRoundCategory() const {}
    const std::string &getRoundPuzzle() const {}
    const int &getRoundTotal() const {}

    // Display
    void display() const {}

    // read round from file
    Round readFromFile(const std::string &fileName) {}
};

#endif
