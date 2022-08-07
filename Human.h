#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{
public:
    Human();
    char makeMove();
    char* moves;
	int totalMoves;
	int noofmove;
};

#endif