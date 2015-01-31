#ifndef HIT_H_INCLUDED
#define HIT_H_INCLUDED

class Equipment
    {
    public:
        //Constructor
        inline Equipment();
        //Buffs and Debuff Unit(s)
        inline void Enhancement();
        //Instant kill effects or destroys other cards.
        inline void Destruction();
        //Increases Resources
        inline void GenerateGold();
    private:
        //cost = cost to play
        int Cost;

    };

#endif // HIT_H_INCLUDED
