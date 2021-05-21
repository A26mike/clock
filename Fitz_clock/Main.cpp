#include <array>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <Windows.h>
#include "Time.h"
#include "ConsoleOutput.h"



/**
 * This program displays a clock in 24hr and 12hr format.
 * using  ISO 8601
 *
 * @return int
 */

int main()
{
	// initialise all user time inputs to 0;
	int userHour = 0;
	int userMinute = 0;
	int userSecond = 0;
	// seconds * 1000 = second handler used for sleep.
	const int SECOND_HANDLER = 1000;
	
	/*
	 * Need to move SystemTime from time.cpp to get system time only once. It would have been better of not used sleep to update seconds.
	 * 
	 */
	std::array<int, 3> SystemTime = getSystemTime();

	//time loop
	bool keepTime = true;

	while(keepTime)
	{
		system("CLS");
		printTitle();
		printTime(clock12HourFormat(updateTime(userHour, userMinute, userSecond, SystemTime)), clock24HourFormat(updateTime(userHour, userMinute, userSecond, SystemTime)));
		printMenu();

		// add a second to the  clock;
		userSecond += 1;

		// Async key state does not need to stop to get key input from user. 

		if (GetAsyncKeyState('1') & 0x01)
		{
			userHour += 1;
		}

		if (GetAsyncKeyState('2') & 0x01)
		{
			userMinute += 1;
		}

		if (GetAsyncKeyState('3') & 0x01)
		{
			userSecond += 1;
		}

		if (GetAsyncKeyState('4') & 0x01)
		{
			
			keepTime = false;
		}
		Sleep(SECOND_HANDLER);
	}
	std::cout << "Good bye";
	return 0;
}