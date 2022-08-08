#include "Referee.h"
#include <iostream>
#include <string>
using namespace std;

char Referee::refGame(Human H, Computer C)
{
	char p1 = H.makeMove();
	char p2 = C.makeMove();
    
    switch(p1)
    {
    	case 'R':
    	{
    		return 'T';
    	}
    	case 'P':
    	{
    		return 'W';
    	}
    	case 'S':
    	{
    		return 'L';
    	}
    }
}
