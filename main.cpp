#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <vector>

int main()
{
    // For each card
    // Color/Suit
    // Face/Value
    // 

    //Card c = { "Ace", "Spades", 10 };
    //Card c;
    //c.name = "Ace";
    //c.suit = "Spades";
    //c.value = 10;

    Card c = Card("King", "Hearts", 10);
    Card c2 = Card( "Ace", "Spades", 10 );
    Card c3 = Card("Three", "Diamonds", 3);

    std::cout << c.name;

    std::vector<Card> cards;
    cards.push_back(c);
    cards.push_back(Card("Four", "Clubs", 4));

    std::cout << cards[1].name;

    Deck d;

    return 0;
}