#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include "Card.h"
#include "Recruit.h"


class Field
{
    public:
        Field();
        void updateField();
        int FieldPositionEmpty();

    private:
        const int MAX_FIELD_SIZE = 5;

        vector<Recruit> playerField;
        vector<Recruit> oppField;
        vector<Card> playerGraveyard;
        vector<Card> oppGraveyard;

};

#endif // FIELD_H
