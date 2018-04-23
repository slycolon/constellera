#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include 'begin.h'

using namespace std;

int main()
{
  int x;
  bool endLoop = true;
  cout<<"welcome to constellera: the game"<<endl<<endl;
  
  x = begin();
	
  
	do
	{
  	if (x == 0)
  	{
  	  newGame();
  	}
  	else if (x == 1)
  	{
  	  loadGame();
  	}
  	else if (x == 2)
  	{
  	  help();
  	}
  	else if (x == 3)
  	{
  	  return 0;
  	}
  	else
		{
			cout<<"invalid. please try again.";
			endLoop = false;
		}
}
