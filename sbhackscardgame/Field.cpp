#include "Field.h"
#include "Card.h"
#include <iostream>

using namespace std;

Field::Field()
{
    playerField.resize(MAX_FIELD_SIZE);
    oppField.resize(MAX_FIELD_SIZE);
}

void Field::updateField()
{
    for(int i = 0; i < playerField.size(); ++i)
    {
        if(playerField.at(i).Recruits.isDead)
        {
            while(playerField.at(i).Recruit.isDead())
            {
                for(int k = 0; k < playerField.size() - 1; k++)
                {
                    playerField.at(i) = playerField.at(i + 1);
                }
            }

            playerField.at(4).Recruit.Health = 0;
            playerField.at(4).Recruit.Atk = 0;
            playerField.at(4).Recruit.Cost = 0;

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

int Field::FieldPositionEmpty();
{
    for(int i = 0; i < playerField.size(); ++i)
    {
        if(playerField.at(i).Atk = 0)
        {
            return i;
        }
        else
        {

        }
    }


}
