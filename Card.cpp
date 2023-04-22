#include "Card.h"
#include <iostream>

Card::Card(std::string newName, std::string newSuit, int newValue)
{
    std::cout << "Card Constructor called!\n";
    name = newName;
    suit = newSuit;
    value = newValue;
    std::cout << "test";
}
