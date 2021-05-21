#pragma once
//#include <ctime>

tm* getCurrentTime();
int getCurrentHour();
int getCurrentMinute();
int getCurrentSeconds();
std::array<int, 3> getSystemTime();
std::array<int, 3> updateTime(int& userHour, int& userMinute, int& userSecond,  std::array<int, 3>& SystemTime);
std::string clock24HourFormat(std::array<int, 3> updatedTime);
std::string clock12HourFormat(std::array<int, 3> updatedTime);

