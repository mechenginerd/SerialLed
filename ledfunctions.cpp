#include "led.h"

bool serialLed::connect(char com, int baud)
{
	int isSerialOpen = serialOpen( com, baud );
	
	if ( isSerialOpen >= 0 )
		return true;
	else
		return false;
}

void serialLed::state ( char onOff )
{
	if ( onOff == "on" )
	{
		
	}
}