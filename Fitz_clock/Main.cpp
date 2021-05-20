
#include <iostream>
#include <cstdlib>
#include "string"
#include <sstream>
#include "CurrentTime.h"
#include "ConsoleOutput.h"
#include<windows.h>


std::string print24Format(int userHour, int userMinute, int userSecond);

/**
 * This program displays a clock in 24hr and 12hr format.
 * using  ISO 8601
 *
 * @return int
 */
int main()
{
	
	for(int i = 0; i < 1000 ;++i)
	{
        Sleep(1000);
        system("CLS");

        printTime();
        std::cout <<  std::flush;
	}

    return 0;
}


std::string print24Format(int userHour, int userMinute, int userSecond)
{
    int hour = userHour + getCurrentHour();
    int minute = userMinute + getCurrentMinute();
    int second = userSecond + getCurrentSeconds();
    std::string militaryFormat;

    militaryFormat = std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
    return militaryFormat;
//"15:22:02"	
}

//TODO get initial time and add a second or wait a second
//TODO add logic for 60 seconds 60 mins and 24/12 hours + PM / am
//



 