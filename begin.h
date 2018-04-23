#include <iostream>
#include <iomanip>
#include <windows.h>
#include <fstream>

int begin()
{
	
	int choice;
	
	cout<<"	0 - new game" << endl
			<<"	1 - load game" << endl
			<<"	2 - help" << endl
			<<"	3 - exit" << endl << endl
			<<">";
	
	cin >> choice;
}

int newGame()
{
	ifstream savefile;
	
	
}

int loadGame()
{
	bool loopEnd = true;
	int input = 0;
	ifstream saveFile;
	
	do
	{
		cout<<"choose a file to load from (1-5)" <<endl <<endl <<">";
		cin >> input;
		switch (input)
		{
			
		}
	} while (loopEnd == false);
}

void help()
{
	
}
