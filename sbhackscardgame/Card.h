#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>
#include "Player.h"

using namespace std;

class Card
{
private:
    //Constructor

    public:

    class Recruit
    {
        public:
        //Constructor
            inline Recruit();
            //Multiple Constructors for different units maybe
            inline Recruit( string Name, const int hp, const int atk, const int cost);
            inline Recruit Attack(Card::Recruit &);
            inline int updateHealth(int);
            inline void displayStats();
            inline void displayName();

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
        inline Equipment();
        //Buffs and Debuff Unit(s)
        inline void Enhancement();
        //Instant kill effects or destroys other cards.
        inline void Destruction();
        //Increases Resources
        inline void GenerateGold();
    private:
        //cost = cost to play
        int Cost;

    };
    class HitCard
    {
        public:
            //Constructor
            inline HitCard();
            //Instant Kill Function
            inline void Kill();
        private:
            int Cost;

            int Dmg;
    };
    class Money
    {
        public:

        private:
            int credits;


    };


};

#endif // CARD_H_INCLUDED
