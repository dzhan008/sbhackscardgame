#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>
#include "Player.h"

using namespace std;

class Card
{
private:
    //Constructor

    inline Recruit();
    inline HitCard();
    inline Money();
    inline Equipment();

    public:

    string type;
};

#endif // CARD_H_INCLUDED
