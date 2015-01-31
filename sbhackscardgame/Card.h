#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>
#include "Player.h"

using namespace std;

class Card
{
private:
    //Constructor
//<<<<<<< HEAD

    inline Recruit();
    inline HitCard();
    inline Money();
    inline Equipment();

    public:
=======
    int Health;
    int Atk;
    int Cost;
    string name;
    public:
    Card();

        //Constructor
>>>>>>> origin/master

    string type;
};

#endif // CARD_H_INCLUDED
