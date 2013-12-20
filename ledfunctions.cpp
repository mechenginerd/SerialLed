#include "led.h"

void serialLedArray::build()
{
	//variables for build
	int sizeArray, pinNumber, status;
	string strStatus; 
	
	cout << "Enter the number of commands to be sent must be ten or less: " << endl;
	cin >> sizeArray;
	sizeArray *=2;

	commands.resize(sizeArray);

	//asks for and saves commands which are written to commands
	cout << "Enter a the pin to change and the command and press return to enter the next command: " << endl;
	for ( int i = 0; i < sizeArray; i+=2 )
	{
		
		cin >> pinNumber >> strStatus;
		
		if ( strStatus == "on" || strStatus == "On" )
		{
			status = 1;
			//cout << "Status of " << pinNumber << "is on" << endl;
		}
		else
			status = 0;

		commands[i] = pinNumber;
		commands[i+1] = status;
	}
}

void serialLedArray::send()
{
	//call xbee stuff, serial.write commands
}

serialLedArray::serialLedArray( string comInit, int baudInit)
{
	com = comInit;
	baud = baudInit;
	
	ledArray.begin ( com, baud );		//the constructor opens the serial communication
}