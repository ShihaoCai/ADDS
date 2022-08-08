#include<iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main()
{
   Human H;
   Computer C;
   Referee R;

   R.refGame(H, C);

   return 0;
}