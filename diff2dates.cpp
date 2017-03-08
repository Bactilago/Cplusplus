#include <ctime>

// Make a tm structure representing this date
std::tm make_tm(int year, int month, int day)
{
    std::tm tm = {0};
    tm.tm_year = year - 1900; // years count from 1900
    tm.tm_mon = month - 1;    // months count from January=0
    tm.tm_mday = day;         // days count from 1
    return tm;
}

// Structures representing the two dates
std::tm tm1 = make_tm(2012,4,2);    // April 2nd, 2012
std::tm tm2 = make_tm(2003,2,2);    // February 2nd, 2003

// Arithmetic time values.
// On a posix system, these are seconds since 1970-01-01 00:00:00 UTC
std::time_t time1 = std::mktime(&tm1);
std::time_t time2 = std::mktime(&tm2);

// Divide by the number of seconds in a day
const int seconds_per_day = 60*60*24;
std::time_t difference = (time1 - time2) / seconds_per_day;    

// To be fully portable, we shouldn't assume that these are Unix time;
// instead, we should use "difftime" to give the difference in seconds:
double portable_difference = std::difftime(time1, time2) / seconds_per_day;
