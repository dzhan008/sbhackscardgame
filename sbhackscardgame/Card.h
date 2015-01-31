#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>
#include "Player.h"

using namespace std;

class Card
{
private:
<<<<<<< HEAD
    //Constructor
//<<<<<<< HEAD
=======
        int Health;
        int Atk;
        int Cost;
        string name;


    string type;
>>>>>>> origin/master



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
    bool isDead();

    void attack(Card);


};

#endif // CARD_H_INCLUDED
