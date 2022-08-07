#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Human.cpp"
#include "Computer.cpp"

using namespace std;

class Referee
{
public:
    Referee(); 
    char refGame(Human player1, Computer player2);
};

#endif