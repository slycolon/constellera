#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include 'begin.h'

using namespace std;

int main()
{
	int x = 5;
	bool endLoop = true;
	cout<<"welcome to constellera: the game"<<endl<<endl;
	
	
  	
	do
	{
		x = begin();
		
  		if (x == 0)
  		{
  			directory = newSave();
			endLoop = true;
  		}
  		else if (x == 1)
  		{
  			loadGame();
			endLoop = true;
  		}
  		else if (x == 2)
  		{
  			help();
			endLoop = true;
  		}
  		else if (x == 3)
  		{
  			return 0;
			endLoop = true;
  		}
  		else
		{
			cout<<"invalid. please try again.";
			endLoop = false;
		}
	} while (endLoop = false);
	
