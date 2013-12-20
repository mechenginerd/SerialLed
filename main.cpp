/*
This is the main function to run the serial led array
*/

#include "led.h"

int main()
{
	serialLedArray myArray ( "ttyCom0", 57600 );
	
	for (;;)
	{
		myArray.build();
		myArray.send()
		
		cout << "Press enter to continue: " << endl;
		getchar();
	}

	
	
	return 0;
}