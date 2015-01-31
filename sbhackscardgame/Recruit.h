#ifndef RECRUIT_H_INCLUDED
#define RECRUIT_H_INCLUDED
#include <string>
using namespace std;
class Recruit
    {
        public:
        //Constructor
            inline Recruit();
            //Multiple Constructors for different units maybe
            inline Recruit(string Name, const int hp, const int atk, const int cost);
            inline Recruit Attack(Recruit &);
            inline int updateHealth(int);
            inline void displayStats();
            inline void displayName();

        private:

            struct Recruits
            {
                int Health;
                int Atk;
                int Cost;
                bool isDead;
                string name;
            };
            //int Health;
            //int Atk;
            //int Cost;
            //string name;
           // bool isDead;
    };


#endif // RECRUIT_H_INCLUDED
