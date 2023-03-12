#include <iostream>
#include <time.h>

namespace dt
{
    namespace get
    {
        struct tm *currentTime()
        {
            time_t TIME_NOW = time(NULL);

            return localtime(&TIME_NOW);
        }

        int hour(struct tm *now_tm)
        {
            return now_tm->tm_hour;
        }

        int min(struct tm *now_tm)
        {
            return now_tm->tm_min;
        }

        int minute(struct tm *now_tm)
        {
            min(now_tm);
        }

        int sec(struct tm *now_tm)
        {
            return now_tm->tm_sec;
        }
        
        int second(struct tm *now_tm)
        {
            sec(now_tm);
        }

        int wday(struct tm *now_tm)
        {
            return now_tm->tm_wday;
        }

        int weekDay(struct tm *now_tm)
        {
            dt::get::wday(now_tm);
        }

        int day(struct tm *now_tm)
        {
            return now_tm->tm_mday;
        }

        int mday(struct tm *now_tm)
        {
            dt::get::day(now_tm);
        }

        int monthDay(struct tm *now_tm)
        {
            dt::get::day(now_tm);
        }

        int month(struct tm *now_tm)
        {
            return now_tm->tm_mon;
        }

        int mon(struct tm *now_tm)
        {
            dt::get::month(now_tm);
        }

        int yDay(struct tm *now_tm)
        {
            dt::get::day(now_tm);
        }

        int yearDay(struct tm *now_tm)
        {
            return now_tm->tm_yday;
        }

        int year(struct tm *now_tm)
        {
            return now_tm->tm_year + 1900;
        }

        const char *zone(struct tm *now_tm)
        {
            return now_tm->tm_zone;
        }
    }

    namespace print
    {
        void hour(struct tm *now_tm)
        {
            std::cout<<dt::get::hour(now_tm);
        }

        void min(struct tm *now_tm)
        {
            std::cout<<dt::get::min(now_tm);
        }

        void minute(struct tm *now_tm)
        {
            std::cout<<dt::get::min(now_tm);
        }

        void sec(struct tm *now_tm)
        {
            std::cout<<dt::get::sec(now_tm);
        }

        void second(struct tm *now_tm)
        {
            dt::print::sec(now_tm);
        }

        void month(struct tm *now_tm)
        {
            std::cout<<dt::get::month(now_tm);
        }

        void mon(struct tm *now_tm)
        {
            std::cout<<dt::get::month(now_tm);
        }

        void wday(struct tm *now_tm)
        {
            std::cout<<dt::get::wday(now_tm);
        }
        
        void weekDay(struct tm *now_tm)
        {
            std::cout<<dt::get::weekDay(now_tm);
        }
        
        void day(struct tm *now_tm)
        {
            std::cout<<dt::get::day(now_tm);
        }
        
        void mday(struct tm *now_tm)
        {
            std::cout<<dt::get::mday(now_tm);
        }
        
        void monthDay(struct tm *now_tm)
        {
            std::cout<<dt::get::monthDay(now_tm);
        }
        
        void yDay(struct tm *now_tm)
        {
            std::cout<<dt::get::yDay(now_tm);
        }
        
        void yearDay(struct tm *now_tm)
        {
            std::cout<<dt::get::yearDay(now_tm);
        }
        
        void year(struct tm *now_tm)
        {
            std::cout<<dt::get::year(now_tm);
        }
        
        void zone(struct tm *now_tm)
        {
            std::cout<<dt::get::zone(now_tm);
        }
        
    }
}
