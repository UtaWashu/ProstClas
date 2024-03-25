#ifndef TIME_HPP
#define TIME_HPP

#include <string>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int hours, int minutes, int seconds);
    
    void getCurrentTime();
    void setTime(int hours, int minutes, int seconds);
    void addHours(int hours);
    void addMinutes(int minutes);
    void addSeconds(int seconds);

    int toSeconds();
    int toHours();
    int toMinutes();
    std::string toString();

    int getHours();
    void setHours(int hours);
    int getMinutes();
    void setMinutes(int minutes);
    int getSeconds();
    void setSeconds(int seconds);

    bool isEqual(Time other);
};

#endif 