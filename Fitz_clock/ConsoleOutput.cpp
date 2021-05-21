#include <iostream>
#include <string>
#include <sstream>

/**
 * Prints out the menu for user input  
 * 
 */

void printMenu()
{
	std::cout << R"(

 		**************************
 		*   1-Add One Hour       *
 		*   2-Add One Minute     *
 		*   3-Add One Second	 *
 		*   4-Exit Program       *
 		**************************
 )";
}


/**
 * This function prints the formatted output both clocks 24hr and 12hr
 *
 */
void printTime(std::string format12Hour, std::string format24Hour) {
	const std::string  ASTERISK_26 = "**************************";
	std::cout << std::endl;
	std::cout << ASTERISK_26 << "    " << ASTERISK_26 << std::endl;
	std::cout << "*      12-Hour Clock     *" << "    " << "*      24-Hour Clock     *" << std::endl;
	std::cout << "*      " << format12Hour << "       *" << "    " << "*      " << format24Hour << "          *" << std::endl;
	std::cout << ASTERISK_26 << "    " << ASTERISK_26 << std::endl;
}


/**
 * This function prints the company name  
 */
void printTitle()
{
	std::cout << R"(
    ____ _               _         _____         _
   / ___| |__   __ _  __| | __ _  |_   _|__  ___| |__
  | |   | '_ \ / _` |/ _` |/ _` |   | |/ _ \/ __| '_ \
  | |___| | | | (_| | (_| | (_| |   | |  __/ (__| | | |
   \____|_| |_|\__,_|\__,_|\__,_|   |_|\___|\___|_| |_|

         )";
}