#ifndef GAME_H
#define GAMEX_H
#include "playerx.h"
#include "Boardx.h"
#include <iostream>

class Gamex
{
    public:
        Gamex();
        virtual ~Gamex();

        void initialize();
        void update();
        void render ();
        bool checkwin();
        void switchplayer();
        void run();
        char getCurrentPlayerIcon();
        protected:
    private:
    playerx m_p1;
    playerx m_p2;
    playerx *m_currentPlayer;
    bool m_isComplete;
    Boardx m_board;
};

#endif // GAMEX_H
