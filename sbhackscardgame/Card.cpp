#include <iostream>
#include "Card.h"
#include <string>

using namespace std;

Recruit::Recruit()
{
    Health = 1;
    Atk = 1;
    Cost = 100;
    name = "Poop Fighter";
}
//Constructs Specific Cards based on parameters.
Recruit::Recruit(const string Name, const int hp, const int atk, const int cost)
{
    Health = hp;
    Atk = atk;
    Cost = cost;
    name = name;
}
const Recruit Recruit::Attack(Recruit &Target)
{
    Target.Health -= Atk;
    return Target;

}
//Private Function
Recruit Recruit::isDead(Recruit &Unit)
{
    if(Unit.Health == 0)
    {
        cout << Unit.name << " is dead. \n";
    }
    return Unit;


}
