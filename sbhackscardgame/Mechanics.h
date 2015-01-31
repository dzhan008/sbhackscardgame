#ifndef MECHANICS_H
#define MECHANICS_H
#include <vector>

class Mechanics
{
    public:
        Mechanics();
        void DisplayDeck(vector<Card> &) const;
        void DisplayHand(vector<Card> &) const;
        void ShuffleDeck(vector<Card> &);
        void GetChoiceStart();
        void GetChoiceTurn();
        void DrawTwo(int);
        void DrawOne(int);
        void PlayCard();
        void BuyCard();
        bool TurnEnd();
        void EndTurn();
    private:
        int choice;
        vector<Card> hand;
        vector<Card> deck;

};

#endif // MECHANICS_H
