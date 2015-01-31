#include <iostream>
#include "Card.h"
#include "Card.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Recruit unit1;
    Recruit unit2("Soldier", 1, 1, 100);
    unit1.displayStats();
    unit2.displayStats();
    unit1.Attack(unit2);
    cout << endl;
    unit2.displayStats();
    return 0;
}
