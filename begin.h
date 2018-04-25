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

int newSave()
{
	ifstream savefile;
	bool exitLoop = true;
	int choice = 0;
	
	do
	{
		cout<<"choose a file to save to (1-5)" << endl << endl << ">";
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				savefile.open("save1.txt");
				exitLoop = true;
				break;
			case 2:
				savefile.open("save2.txt");
				exitLoop = true;
				break;
			case 3:
				savefile.open("save3.txt");
				exitLoop = true;
				break;
			case 4:
				savefile.open("save4.txt");
				exitLoop = true;
				break;
			case 5:
				savefile.open("save5.txt");
				exitLoop = true;
				break;
			default:
				cout<<"invalid. try again." << endl;
				exitLoop = false;
				break;
		} while (exitLoop == false);
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
