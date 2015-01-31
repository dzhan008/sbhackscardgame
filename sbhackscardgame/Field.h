#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include "Card.h"


class Field
{
    public:
        Field();
        void updateField();
        int FieldPositionEmpty();

    private:
        const int MAX_FIELD_SIZE = 5;

        vector<Card::Recruit> playerField;
        vector<Card::Recruit> oppField;
        vector<Card::Recruit> playerGraveyard;
        vector<Card::Recruit> oppGraveyard;

};

#endif // FIELD_H
