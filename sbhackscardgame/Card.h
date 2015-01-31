#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>
#include "Player.h"
using namespace std;

class Card
{
public:
    //Constructor

    private:

    class Recruit
    {
        public:
        //Constructor
            inline Recruit();
            //Multiple Constructors for different units maybe
            inline Recruit( string Name, const int hp, const int atk, const int cost);
            inline const Recruit Attack(Recruit &);
            inline void displayStats();
            inline void displayName();
            inline const Recruit DirectAttack(Player &);
        private:
            int Health;
            int Atk;
            int Cost;
            string name;
            bool isDead;
    };
    class Equipment
    {
    public:
        //Constructor
        Equipment();
        //Buffs and Debuff Unit(s)
        void Enhancement();
        //Instant kill effects or destroys other cards.
        void Destruction();
        //Increases Resources
        void GenerateGold();
    private:
        //cost = cost to play
        int cost;

    };
    class HitCard
    {
        public:
            //Constructor
            HitCard();
            //Instant Kill Function
            void Kill();
        private:
            int cost;

            int dmg;
    };


};

#endif // CARD_H_INCLUDED
