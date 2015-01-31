#ifndef COMBAT_H
#define COMBAT_H
#include "Player.h"
#include "Card.h"

class Combat
{
    public:
        Combat();
        void attack();
        void attack(Card, Player);


    private:
};

#endif // COMBAT_H
