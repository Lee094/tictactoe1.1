#include "Gamex.h"
#include "Playerx.h"
#include "Boardx.h"
Gamex::Gamex()
{
    //ctor
}

Gamex::~Gamex()
{
    //dtor
}

void Gamex::initialize (){
    m_board.initialize();
    m_p1.setName("Montejero Haciendero");
    m_p1.setIcon('X');
    m_p2.setName("Panchiquito Ochoa");
    m_p2.setIcon('O');
    m_currentPlayer = &m_p1;

}
void Gamex::update (){
    m_board.update(m_currentPlayer->getMove(), m_currentPlayer->getIcon());
    m_isComplete = checkwin();
    switchplayer();

}
void Gamex::render (){
    getCurrentPlayerIcon();
    m_board.render();
    cout << "\t\tYour turn -->  " << m_currentPlayer->getName();

    }


bool Gamex::checkwin (){
    m_board.checkwin();
}
char Gamex::getCurrentPlayerIcon(){
    return 'X';
}

void Gamex::switchplayer(){
    if (m_currentPlayer == &m_p1)
        m_currentPlayer = &m_p2;
    else if (m_currentPlayer == &m_p2)
        m_currentPlayer = &m_p1;
}

void Gamex::run(){
    while(!m_isComplete){
    render();
    update();
    m_board.render();
    cout << "\t\tThe winner is " << m_currentPlayer->getName() << endl;

}
}

