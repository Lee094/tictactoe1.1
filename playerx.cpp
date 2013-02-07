#include "playerx.h"
#include "Gamex.h"
playerx::playerx()
{
    //ctor
}

playerx::~playerx()
{
    //dtor
}

void playerx::setName (string n){
    name = n;
}
void playerx::setIcon (char i){
    icon = i;
}
void playerx::setMove(int m){
    move = m;
}
string playerx::getName (){
    return name;
}
char playerx::getIcon (){
    return icon;
}
int playerx::getMove(){
    return move;
}
