#include <iostream>
#include "Card.h"
#include "Player.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Card a = Card(5, 2);
    Card b = Card(1, 1);

    a.attack(b);


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
*/
