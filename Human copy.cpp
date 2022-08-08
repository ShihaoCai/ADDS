#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{
public:
	char* moves;
	int totalMoves;
	int noofmove;
	Human()
	{
		cin>>totalMoves;
		moves = new char [totalMoves];
		for(int i = 0 ; i<totalMoves;i++){
			cin>>moves[i];
		}
		noofmove= 0;
	}

	char move()
	{
		if(noofmove>= totalMoves){
			cout<<"Error"<<endl;
			return '-';
		}
		char returnV = moves[noofmove];
		noofmove = noofmove +1;
		return returnV;
	}
};

#endif