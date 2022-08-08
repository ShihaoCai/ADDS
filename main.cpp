#include<iostream>
#include "Human.cpp"
#include "Computer.cpp"
#include "Referee.cpp"

using namespace std;

int main()
{
   Human H;
   Computer C;
   Referee R;

   R.refGame( H, C );

   return 0;
}