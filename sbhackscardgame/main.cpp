#include <iostream>
#include "Card.h"
#include "Card.cpp"
#include "Player.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Card::Recruit monster;
    monster.displayStats();

    return 0;
}
