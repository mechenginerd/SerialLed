//comments go here

#include <wiringPi.h>
#include <serial/serial.h>
#include <iostream>
#include <sstream>

using namespace std;

class serialLed()
{
	//bool isOn;
public:
//connect takes a char as the com port and an int as the baud rate returns true if the com is open
	bool connect( char com, int baud);
//toggle switches the led to a different state
	void state(char onOff);
};
