#include "Field.h"
#include <iostream>

using namespace std;

Field::Field()
{

}

void Field::updateField()
{
    for(int i = 0; i < playerField.size(); ++i)
    {
        if(playerField.at(i).isDead)
        {
            while(playerField.at(i).isDead)
            {
                for(int k = 0; k < playerField.size() - 1; k++)
                {
                    playerField.at(i) = playerField.at(i + 1);
                }
            }

            playerField.at(4).Health = 0;
            playerField.at(4).Atk = 0;
            playerField.at(4).Cost = 0;

        }
    }

    for(int i = 0; i < oppField.size(); ++i)
    {
        if(oppField.at(i).isDead)
        {
            while(oppField.at(i).isDead)
            {
                for(int k = 0; k < oppField.size() - 1; k++)
                {
                    oppField.at(i) = oppField.at(i + 1);
                }
            }

            oppField.at(4).Health = 0;
            oppField.at(4).Atk = 0;
            oppField.at(4).Cost = 0;

        }
    }
}
