#include <iostream>
#include "Recruit.h"
#include <string>

using namespace std;

Recruit::Recruit()
{
    name = "Default on Loans David";
    Health = 1;
    Atk = 1;
    Cost = 100;
    isDead = false;
}
Recruit::Recruit(string Name, const int hp, const int atk, const int cost)
{
    name = Name;
    Health = hp;
    Atk = atk;
    Cost = cost;
    isDead = false;
}
void Recruit::displayStats()
{
    cout << "Name: " << name << endl;
    cout << "Health: " << Health << endl;
    cout << "Atk: " << Atk << endl;
    cout << "Cost: " << Cost << endl;
}


