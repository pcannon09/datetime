#include "dt.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    while (1)
    {
        system("clear");
        
        struct tm *timeNow = dt::get::currentTime();
        
        std::cout<<"(hour) ";
        dt::print::hour(timeNow);
        std::cout<<"\n";
        std::cout<<"(min) ";
        dt::print::min(timeNow);
        std::cout<<"\n";
        std::cout<<"(minute) ";
        dt::print::minute(timeNow);
        std::cout<<"\n";
        std::cout<<"(sec) ";
        dt::print::sec(timeNow);
        std::cout<<"\n";
        std::cout<<"(second) ";
        dt::print::second(timeNow);
        std::cout<<"\n";
        std::cout<<"(wday) ";
        dt::print::wday(timeNow);
        std::cout<<"\n";
        std::cout<<"(weekDay) ";
        dt::print::weekDay(timeNow);
        std::cout<<"\n";
        std::cout<<"(day) ";
        dt::print::day(timeNow);
        std::cout<<"\n";
        std::cout<<"(mday) ";
        dt::print::mday(timeNow);
        std::cout<<"\n";
        std::cout<<"(monthDay) ";
        dt::print::monthDay(timeNow);
        std::cout<<"\n";
        std::cout<<"(month) ";
        dt::print::month(timeNow);
        std::cout<<"\n";
        std::cout<<"(mon) ";
        dt::print::mon(timeNow);
        std::cout<<"\n";
        std::cout<<"(yDay) ";
        dt::print::yDay(timeNow);
        std::cout<<"\n";
        std::cout<<"(yearDay) ";
        dt::print::yearDay(timeNow);
        std::cout<<"\n";
        std::cout<<"(year) ";
        dt::print::year(timeNow);
        std::cout<<"\n";

        sleep(1);
    }
}
