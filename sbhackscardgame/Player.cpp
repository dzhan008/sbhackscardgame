#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    health = 20;
    credits = 500;
}

int Player::updateHealth(int damage)
{
    health -= damage;

    return health;
}


