#ifndef PLAYER_H
#define PLAYER_H
#include <string>


class Player
{
    public:
        Player(); //Default Constructor

    private:
        int health; //The amount of health a player has
        int credits; //The amount of money a player has
        int grudges; //The amount of grudges a player has

};

#endif // PLAYER_H
