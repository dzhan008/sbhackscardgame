#include "Mechanics.h"
#include "Card.h"
#include "Field.h"
#include <iostream>

using namespace std;

Mechanics::Mechanics()
{
    Card c;
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
        cout << i + 1 << ": " << hand.at(i) << endl;
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
int Mechanics::FindEmptyHand()
{
    for(int i = 0; i < hand.size(); i++)
    {
        if(hand.at(i).health == 0)
        {
            return i;
        }
    }
    return 10;
}
int Mechanics::FindEmptyField()
{
    for(int i = 0; i < playerField.size(); i++)
    {
        if(playerField.at(i).health == 0)
        {
            return i;
        }
    }
    return 5;
}
void Mechanics::GetChoiceStart()
{
    cout << "Make your choice:" << endl;
    cout << "1. Draw two random cards." << endl;
    cout << "2. Draw one random card and one type card." << endl;
    cin >> choice;
    if(choice == 1)
    {
        //While there remains space in the hand,
        //draw a card from the deck and add it onto the hand
        while(FindEmptyHand() < 10)
        {
            hand.at(FindEmptyHand()) = deck.back();
            deck.back().cost = 0;
            deck.back().health = 0;
        }
    }
    else if(choice == 2)
    {
        DrawOne();
    }
}
void Mechanics::GetChoiceTurn()
{
    cout << "Make your choice:" << endl;
    cout << "1. Play a card." << endl;
    cout << "2. Buy a card." << endl;
    cin >> choice;
}
int Mechanics::FindDeckType(string choices) //Change later to check for each card type
{
    for(int i = 0; i < deck.size(); i++)
    {
        if(deck.at(i).type == choices)
        {
            return i;
        }
    }
}
void Mechanics::DrawOne()
{
    hand.at(FindEmptyHand()) = deck.back();
    deck.back().cost = 0;
    deck.back().health = 0;
    cout << "Choose type of card to draw." << endl;
    cout << "1. Recruit" << endl;
    cout << "2. Hit" << endl;
    cout << "3. Equipment" << endl;
    cout << "4. Money" << endl;
    cin >> choice;
    if(choice == 1)
    {
        FindDeckType("Recruit");
    }
    else if(choice == 2)
    {
        FindDeckType("Hit");
    }
    else if(choice == 3)
    {
        FindDeckType("Equipment");
    }
    else if(choice == 4)
    {
        FindDeckType("Money");
    }
}

Card Mechanics::ChooseCard()
{
    int cardHand;
    cout << "Enter number corresponding with card position." << endl;
    DisplayHand();
    cin >> cardHand;
    return hand.at(cardHand - 1);
}
void Mechanics::PlayCard
{
    if(FindEmptyField)
    {
        cout << "Field full. Cannot play card." << endl;
    }
    else
    {
        playerField
    }
}
void Mechanics::BuyCard()
{

}
bool Mechanics::TurnEnd()
{
    if()
}
void Mechanics::EndTurn()
{

}
