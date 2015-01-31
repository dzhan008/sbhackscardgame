#ifndef COMBAT_H
#define COMBAT_H


class Combat
{
    public:
        Combat();
        int calculateDamage();
        int combat(Card, Card);
        int combat(Card, Player);

    private:
        int damage;
};

#endif // COMBAT_H
