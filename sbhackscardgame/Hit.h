#ifndef HIT_H_INCLUDED
#define HIT_H_INCLUDED

class HitCard()
{
    public:
        //Constructor
        HitCard();
        //Instant Kill Function
        void Kill();
    private:
        int cost;

        int dmg;
};

#endif // HIT_H_INCLUDED
