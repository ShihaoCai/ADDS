#ifndef HUMAN_H
#define HUMAN_H

class Human
{
	public:
    	Human();
    	char makeMove();
	
	private:
    	char* moves;
		int totalMoves;
		int noofmove;
};

#endif