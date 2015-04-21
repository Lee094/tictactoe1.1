#ifndef BOARDX_H
#define BOARDX_H
#include <iostream>
using namespace std;
//comment changes
class Boardx
{
    public:
        Boardx();
        virtual ~Boardx();
        void initialize();
        void render();
        void choice();
        bool checkwin();
        void update(int move, char icon);
    protected:
    private:
    char box[9];

};

#endif // BOARD_H
