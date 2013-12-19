/*
This is the main function to run the serial led array
*/

#include "led.h"


using namespace std;

int main()
{
	int sizeArray, pinNumber, status;
	string strStatus; 
	vector<int> commands;

	cout << "Enter the number of commands to be sent: " << endl;
	cin >> sizeArray;
	sizeArray *=2;

	commands.resize(sizeArray);

	//asks for and saves commands which are written to commands
	for ( int i = 0; i < sizeArray; i+=2 )
	{
		cout << "Enter a the pin to change and the command: " << endl;
		cin >> pinNumber >> strStatus;
		
		if ( strStatus == "on" || strStatus == "On" )
		{
			status = 1;
			cout << "Status of " << pinNumber << "is on" << endl;
		}
		else
			status = 0;

		commands[i] = pinNumber;
		commands[i+1] = status;
	}

	
	
	return 0;
}