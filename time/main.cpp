#include "time.hpp"
#include <iostream>

int main() {
    Time t1(12, 30, 45);

    t1.addHours(1);
    t1.addMinutes(15);
    t1.addSeconds(10);

    std::cout << "Время в секундах: " << t1.toSeconds() << std::endl;
    std::cout << "Время в часах: " << t1.toHours() << std::endl;
    std::cout << "Время в минутах: " << t1.toMinutes() << std::endl;
    std::cout << "Строковое представление времени: " << t1.toString() << std::endl;

    t1.setHours(10);
    t1.setMinutes(20);
    t1.setSeconds(30);

    Time t2(10, 20, 30);
    if (t1.isEqual(t2)) {
        std::cout << "Времена равны" << std::endl;
    } else {
        std::cout << "Времена не равны" << std::endl;
    }

    return 0;
}