#include <wiringPi.h>
#include <serial/serial.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class serialLedArray()
{
	//variables for the constructor
	int baud;
	string com;
	vector<int> commands;
	
public:
//connect takes a char as the com port and an int as the baud rate returns true if the com is open
	void build();
	void send();
	serialLedArray( string comInit, int baudInit );
	serialLedArray();
	
};
