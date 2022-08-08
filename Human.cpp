#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
{
    std::cin>>totalMoves;
	moves = new char [totalMoves];
	
	for(int i = 0 ; i<totalMoves;i++)
    {
        cin>>moves[i];
	}
	
    noofmove = 0;
}
    
char Human::makeMove() 
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