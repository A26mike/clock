#include <ctime>

tm* getCurrentTime()
{
    time_t t = time(nullptr);   // get time now
    tm* now = localtime(&t);
    return now;
}

int getCurrentHour()
{
    tm* now = getCurrentTime();
    return now->tm_hour;
}

int getCurrentMinute()
{
    tm* now = getCurrentTime();
    return now->tm_min;
}

int getCurrentSeconds()
{
    tm* now = getCurrentTime();
    return now->tm_sec;
}