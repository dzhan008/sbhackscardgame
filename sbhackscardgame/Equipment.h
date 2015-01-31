#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDED

class Equipment()
{
public:
    //Constructor
    Equipment();
    //Buffs and Debuff Unit(s)
    void Enhancement();
    //Instant kill effects or destroys other cards.
    void Destruction();
    //Increases Resources
    void GenerateGold();
private:
    //cost = cost to play
    int cost;

};

#endif // EQUIPMENT_H_INCLUDED
