#include "Human.h"

Human::Human()
{
    cin>>totalMoves;
	moves = new char [totalMoves];
	for(int i = 0 ; i<totalMoves;i++){
		cin>>moves[i];
	}
	
	noofmove= 0;
}

Human::makeMove()
{
    if(noofmove>= totalMoves)
    {
		cout<<"Error"<<endl;
		return '-';
	}
	char returnV = moves[noofmove];
	noofmove = noofmove +1;		return returnV;
}