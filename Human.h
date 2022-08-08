#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{
public:
    Human()
    {
        cin>>totalMoves;
	    moves = new char [totalMoves];
	    for(int i = 0 ; i<totalMoves;i++)
	    {
		    cin>>moves[i];
	    }

	    noofmove = 0;
    }
    
    char makeMove()
    {
    	if(noofmove>= totalMoves)
    	{
			cout<<"Error"<<endl;
			return '-';
		}
		char m_return = moves[noofmove];
		noofmove = noofmove +1;		
		return m_return;
    }
    
    char* moves;
	int totalMoves;
	int noofmove;
};

#endif