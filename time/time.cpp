#include "time.hpp"
#include <iostream>

Time::Time() {
    getCurrentTime();
}

Time::Time(int hours, int minutes, int seconds) {
    setTime(hours, minutes, seconds);
}

void Time::getCurrentTime() {

}

void Time::setTime(int hours, int minutes, int seconds) {
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        throw std::invalid_argument("Invalid time value");
    }

    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

void Time::addHours(int hours) {
    this->hours += hours;
}

void Time::addMinutes(int minutes) {
    this->minutes += minutes;
}

void Time::addSeconds(int seconds) {
    this->seconds += seconds;
}

int Time::toSeconds() {
    return hours * 3600 + minutes * 60 + seconds;
}

int Time::toHours() {
    return hours;
}

int Time::toMinutes() {
    return hours * 60 + minutes;
}

std::string Time::toString() {
    return std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds);
}

int Time::getHours() {
    return hours;
}

void Time::setHours(int hours) {
    if (hours < 0 || hours > 23) {
        throw std::invalid_argument("Invalid hours value");
    }

    this->hours = hours;
}

int Time::getMinutes() {
    return minutes;
}

void Time::setMinutes(int minutes) {
    if (minutes < 0 || minutes > 59) {
        throw std::invalid_argument("Invalid minutes value");
    }

    this->minutes = minutes;
}

int Time::getSeconds() {
    return seconds;
}

void Time::setSeconds(int seconds) {
    if (seconds < 0 || seconds > 59) {
        throw std::invalid_argument("Invalid seconds value");
    }

    this->seconds = seconds;
}

bool Time::isEqual(Time other) {
    return (hours == other.getHours() && minutes == other.getMinutes() && seconds == other.getSeconds());
}