#ifndef PLAYERX_H
#define PLAYERX_H
#include <string>
#include <iostream>
using namespace std;

class playerx
{
    public:
        playerx();
        virtual ~playerx();
        void setName (string n);
        void setIcon (char i);
        string getName ();
        char getIcon ();
        void setMove(int m);
        int getMove();
    protected:
    private:
        string name;
        char icon;
        int move;
};

#endif // PLAYER_H
