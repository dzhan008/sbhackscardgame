#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>
#include "Player.h"

using namespace std;

class Card
{
private:
        int Health;
        int Atk;
        int Cost;
        string name;
        bool isDead;


    string type;



    public:
    //Constructor
    inline Card(); //Default for player
     Recruit();
     Card(int, int); //Constructor for recruits
    inline HitCard();
    inline Money();
    inline Equipment();


    int getAtk();
    int getHP();
    int setHP(int HP);
    int credits;

    void attack(Card);


};

#endif // CARD_H_INCLUDED
