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

/*
int main()
{
    int choice;
    cout << "Welcome to SB Hacks Card Game!" << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. Play" << endl;
    cout << "2. Instructions" << endl;
    cout << "3. Exit" << endl;

    cin >> choice;

}

