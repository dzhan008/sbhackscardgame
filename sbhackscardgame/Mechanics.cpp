#include "Mechanics.h"
#include "Card.h"

using namespace std;

Mechanics::Mechanics()
{
    //Card c will construct a card with default 0 parameters
    Card c;
    //deck will have cards initialized to 0
    vector<Card> deck;
    vector<Card> hand;
}

void Mechanics::DisplayDeck(vector<Card> &deck const)
{
    for(int i = 0, i < deck.size(); i++)
    {
        cout << deck.at(i) << endl;
    }
}
void Mechanics::DisplayHand(vector<Card> &hand const)
{
    for(int i = 0, i < hand.size(); i++)
    {
        cout << hand.at(i) << endl;
    }
}
void Mechanics::ShuffleDeck(vector<Card> &deck)
{
    int size;
    int newPosition;
    Card temp;
    //Shuffles last two cards within deck
    //Every draw takes last two cards in deck
    //So shuffle doesn't have to shuffle entire deck
    for(int i = 0; i < deck.size(); i++)
    {
        size = deck.size() - 1;
        newPosition = rand() % size - 1;
        temp = deck.at(newPosition);
        deck.at(newPosition) = deck.back();
        deck.size() - 1 = temp;
    }
}
void Mechanics::GetChoiceStart()
{
    cout << "Make your choice:" << endl;
    cout << "1. Draw two random cards." << endl;
    cout << "2. Draw one random card and one type card." << endl;
    cin >> choice;
}

void Mechanics::GetChoiceTurn()
{
    cout << "Make your choice:" << endl;
    cout << "1. Play a card." << endl;
    cout << "2. Buy a card." << endl;
    cin >> choice;
}
void Mechanics::DrawTwo(int choice)
{
    hand.push_back(deck.back());
    hand.push_back(deck.back());
    deck.pop_back();
    deck.pop_back();
}
void Mechanics::DrawOne(int choice)
{
    hand.push_back(deck.back());
    deck.pop_back();
    cout << "Choose type of card to draw." << endl;
    cout << "1. Recruit" << endl;
    cout << "2. Hit" << endl;
    cout << "3. Equipment" << endl;
    cout << "4. Money" << endl;
    cin >> choice;
    for(int i = 0; i < deck.size(); i++)
    {
        if(choice == 1)
        {

        }
    }
}
