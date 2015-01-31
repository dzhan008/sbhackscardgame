#include <iostream>
#include "Card.h"
#include <string>

using namespace std;

Card::Recruit()
{
    Health = 2;
    Atk = 1;
    type = "Recruit";

}

Card::Card(int HP, int Atk)
{
    Health = HP;
    this->Atk = Atk;
}

Card::HitCard()
{
    type = "Hit";
}

Card::Money()
{
    type = "Money";
}

Card::Equipment()
{
    type = "Equipment";
}

Card::Card()
{
    Health = 20;
    type = "Player";
    credits = 500;
}

Card::getAtk()
{
    return Atk;
}

Card::getHP()
{
    return Health;
}

Card::setHP(int HP)
{
    Health = HP;

    return Health;
}

void Card::attack(Card target)
{
    Health = setHP(Health - target.Atk);

    target.Health = target.Health - Atk;

    cout << Health << " " << target.Health;
}

bool Card::isDead(Card target)
{
    if(target.Health == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}



