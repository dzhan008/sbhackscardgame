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
Recruit::Recruit( string Name, const int hp, const int atk, const int cost)
{
    this->Health = hp;
    this->Atk = atk;
    this->Cost = cost;
    this->name = Name;
}
const Recruit Recruit::Attack(Recruit &Target)
{
    Target.Health -= Atk;
    Target.isDead(Target);
    return Target;

}
void Recruit::displayStats()
{
    cout << "Name: " << name << endl;
    cout << "Hp: " << Health << endl;
    cout << "Atk: " << Atk << endl;
    cout << "Cost: " << Cost << endl;
}
void Recruit::displayName()
{
    cout << name << " ";
}
//Private Function
 Recruit Recruit::isDead(Recruit &Unit) const
{
    if(Unit.Health == 0)
    {

        cout <<Unit.name << " is dead. \n";
    }
    return Unit;


}
