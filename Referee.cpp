#include "Referee.h"

Referee::Referee()
{
    
}

Referee::refGame(Human H, Computer C)
{
    int totalMoves = H.totalMoves;
	for (int i = 0; i < totalMoves;i++)
	{
		char winner = 'T';
		char humanMove = H.move();
		char compMove = C.move();
		if (humanMove=='R')
		{
			if(compMove == 'S')
			{
				winner='W';
			}
			if(compMove == 'P')
			{
				winner = 'L';
			}
		}
		if(humanMove=='S')
		{
			if(compMove == 'R')
			{
				winner  = 'L';
			}
			if (compMove == 'P')
			{
				winner = 'W';
			}
		}
		if(humanMove == 'P')
		{
			if(compMove =='S')
			{
				winner = 'L';
			}
			if(compMove =='R')
			{
				winner = 'W';
			}
		}
		cout<<winner<<" ";
	}
	cout<<endl;
}
