#include <ctime>
#include <array>
#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>


/**
 * Gets the current system Time
 *
 * @returns tm* local time 
 */
tm* getCurrentTime()
{
	time_t t = time(nullptr); // get time now
	tm* now = localtime(&t);
	return now;
}


/**
 * Gets the systems current hour 
 *
 * @returns pointer hour ;
 */
int getCurrentHour()
{
	tm* now = getCurrentTime();
	return now->tm_hour;
}

/**
 * Gets the systems current hour's minutes
 *
 * @returns pointer minutes;
 */

int getCurrentMinute()
{
	tm* now = getCurrentTime();
	return now->tm_min;
}

/**
 * Gets the systems current minute's seconds
 *
 * @returns pointer seconds; 
 */
int getCurrentSeconds()
{
	tm* now = getCurrentTime();
	return now->tm_sec;
}


/**
 * This function gets the system time hour, minute and seconds and adds it to an array
 *
 *
 * @returns array {HH,MM,SS}
 */
std::array<int, 3> getSystemTime()
{
	std::array<int, 3> systemTime = { getCurrentHour(), getCurrentMinute(), getCurrentSeconds() };
	return systemTime;
}

/**
 * This function adds the the user input for hour, minute and seconds with the system time.
 * 
 *@param userHour  reference to userHour defined in main
 *@param userMinute  reference to userMinute defined in main
 *@param userSecond   reference to userSecond defined in main
 *
 *@returns array  {HH, MM, SS} 
 */
std::array<int, 3> updateTime(int& userHour, int& userMinute, int& userSecond , std::array<int, 3>& SystemTime)
{

	int hour = SystemTime[0] + userHour;
	int minute = SystemTime[1] + userMinute;
	int second = SystemTime[2] + userSecond;

	if (second >= 59)
	{
		SystemTime[2] = 0;
		userSecond = 0;
		SystemTime[1] += 1;
		
	}

	if (minute > 59)
	{
		userMinute = 0;
		SystemTime[1] = 0;
		SystemTime[0] += 1;
	}

	if (hour > 23)
	{
		userHour = 0;
		SystemTime[0] = 0;
	}

	std::array<int, 3> updatedTime = { hour, minute, second };

	return updatedTime;
}

/**
 * This function formats the string for the 24 hour time format
 *
 * *@param updatedTime array in format {HH,MM,SS}
 *
 * @returns string HH:MM:SS
 */
std::string clock24HourFormat(std::array<int, 3> updatedTime)
{
	int hour = updatedTime[0];
	int minute = updatedTime[1];
	int second = updatedTime[2];
	std::stringstream hour24Format;

	hour24Format << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second;
	return hour24Format.str();
}

/**
 * This function formats the string for the 12 hour time format
 *
 *@param updatedTime array in format {HH,MM,SS}
 *
 * @returns string HH:MM:SS AM/PM
 */
std::string clock12HourFormat(std::array<int, 3> updatedTime)
{
	int hour = updatedTime[0];
	int minute = updatedTime[1];
	int second = updatedTime[2];
	std::string ampm = "AM";

	// convert time to 12 hour format
	if (hour > 12)
	{
		hour = hour % 12;
		ampm = "PM";
	}

	std::stringstream hour12Format;
	hour12Format << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second << " " << ampm;
	return hour12Format.str();
}