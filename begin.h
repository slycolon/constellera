#include <iostream>
#include <iomanip>
#include <windows.h>
#include <fstream>

using namespace std;

void readMessage(char display[])
{
	int length = display;
	for (int x = 0; x < length; x++)
	{
		cout<<display[x];
		sleep(50);
	}
}

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


/* fu
function: newSave
purpose: 
returns: directory save number
*/
int newSave()
{
	ifstream savefile;
	int directory = 0;
	char newChoice = 'a';
	bool exitLoop = true;
	bool exitInnerLoop = true;
	int choice = 0;
	int first = 0;
	
	do
	{
		cout<<"choose a file to save to (1-5)" << endl << endl << ">";
		cin >> choice;
		directory = choice;
		
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
		}
		
		savefile >> first;
		
		//8658
		
		if (first != 8658)
		{
			cout<<"this file already contains a save. would you like to overwrite it (y/n)?" << endl << endl << ">";
			cin >> newChoice;
			if (newChoice == 'n' || newChoice == 'N')
			{
				cout<<"alright then. ";
				exitLoop = false;
			}
			else
			{
				cout<<"okay, since you didn't say no, i'm overwriting your old character file and" << endl
					<<"saving your new character in file save" << directory << ".txt";
				exitLoop = true;
			}
		}
		else
		{
			cout<<"you have chosen to create a new save in file " << directory << ". is this correct (y/n)?"
				<<endl<<endl<<">";
			cin >> newChoice;
			if (newChoice == 'n' || newChoice == 'N')
			{
				exitLoop = false;
				cout<<"alright then. ";
			}
			else
			{
				cout<<"okay, since you didn't say no, i'm saving your new character in file save" << directory
					<<".txt." << endl;
				exitLoop = true;
			}
		}
		
	} while (exitLoop == false);
		
	savefile.close();
	return directory;
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

void createCharacter(int directory)
{
	ofstream saveto;
	
	switch(directory)
	{
		case 1:
			saveto.open("saves/save1.txt");
			break;
		case 2:
			saveto.open("saves/save2.txt");
			break;
		case 3:
			saveto.open("saves/save3.txt");
			break;
		case 4:
			saveto.open("saves/save4.txt");
			break;
		case 5:
			saveto.open("saves/save5.txt");
			break;
		default:
			saveto.open("saves/save1.txt");
			
	}
	
	//actually start creating the character
	string beginningOne = "";
	readMessage(beginningOne);
}
