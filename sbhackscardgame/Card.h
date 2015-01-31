#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string.h>

using namespace std;

class Recruit
{
public:
    //Constructor
    Recruit();
    //Multiple Constructors for different units maybe
    Recruit( const string Name, const int hp, const int atk, const int cost);
    const Recruit Attack(Recruit &);
private:
    int Health;
    int Atk;
    int Cost;
    string name;
    Recruit isDead(Recruit &);


};

#endif // CARD_H_INCLUDED
