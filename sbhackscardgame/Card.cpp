#include <iostream>
#include "Card.h"
#include <string>

using namespace std;

<<<<<<< HEAD
Card::Recruit::Recruit()
{
    name = "Default on Loans David";
    Health = 1;
    Atk = 1;
    Cost = 100;
    isDead = false;
}
Card::Recruit::Recruit(string Name, const int hp, const int atk, const int cost)
{
    name = Name;
    Health = hp;
    Atk = atk;
    Cost = cost;
    isDead = false;
}
void Card::Recruit::displayStats()
{
    cout << "Name: " << name << endl;
    cout << "Health: " << Health << endl;
    cout << "Atk: " << Atk << endl;
    cout << "Cost: " << Cost << endl;
}





=======
Card::Card()
{
    Health = 0;
    Atk = 0;
    Cost = 0;
    name = "card";

}
>>>>>>> origin/master


