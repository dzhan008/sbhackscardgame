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
    this->isDead = false;
}
//Constructs Specific Cards based on parameters.
Recruit::Recruit( string Name, const int hp, const int atk, const int cost)
{
    this->Health = hp;
    this->Atk = atk;
    this->Cost = cost;
    this->name = Name;
    this->isDead = false;
}
const Recruit Recruit::Attack(Recruit &Target)
{
    Target.Health -= Atk;
    if(Target.Health == 0)
    {
        Target.isDead = true;
    }
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




