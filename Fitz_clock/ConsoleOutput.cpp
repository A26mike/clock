#include <iostream>
#include "string"
#include <sstream>
std::string print24Format(int userHour, int userMinute, int userSecond);

void printMenu()
{
    std::cout << R"(

 		**************************
 		*   1-ADD One Hour       *
 		*   2-Add One Minute     *
 		*   3-Add One Second	 *
 		*   4-Exit Program       *
 		**************************
 )";
}

//placeholder for lining up text

void printTime() {
    std::string time12 = "03:22:02 PM";
    std::string time24 = print24Format(0, 0, 0);
    const std::string  ASTERISK_26 = "**************************";

    std::cout << std::endl;
    std::cout << ASTERISK_26 << "    " << ASTERISK_26 << std::endl;
    std::cout << "*      12-Hour Clock     *" << "    " << "*      24-Hour Clock     *" << std::endl;
    std::cout << "*      " << time12 << "       *" << "    " << "*      " << time24 << "          *" << std::endl;
    std::cout << ASTERISK_26 << "    " << ASTERISK_26 << std::endl;
}


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
