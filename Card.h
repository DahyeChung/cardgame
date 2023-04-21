#pragma once
#include <string>

class Card
{
    public:
        // Variables
        std::string suit;
        std::string name;
        int value;

        //Card(); // Default constructor (no parameters)

        // Non-default constructor
        Card(std::string name, std::string suit, int value);
};

