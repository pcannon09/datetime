#include <iostream>
#include <time.h>

#define SET_TIME                        struct tm

/// @brief You can set date time options (set / get / print)
namespace dt
{
    /// @brief Set hour delay
    namespace delays
    {
        int hourDelayVar = 0;
        int minuteDelayVar = 0;
        int secondDelayVar = 0;
        int weekDayDelayVar = 0;
        int dayDelayVar = 0;
        int monthDayDelayVar = 0;
        int monthDelayVar = 0;
        int yearDayDelayVar = 0;
        int yearDelayVar = 0;

        void reset()
        {
            hourDelayVar = 0;
            minuteDelayVar = 0;
            secondDelayVar = 0;
            weekDayDelayVar = 0;
            dayDelayVar = 0;
            monthDayDelayVar = 0;
            monthDelayVar = 0;
            yearDayDelayVar = 0;
            yearDelayVar = 0;
        }
    }

    /// @brief You can set something to a value
    namespace set
    {
        /* You can set delay manualy doing:
            * delays::variable = value;
        */

        /// @brief Sets hour delay
        /// @param delay 
        void hourDelay(int delay)
        {
            delays::hourDelayVar = delay;
        }
        
        /// @brief Sets minute delay
        /// @param delay 
        void minDelay(int delay)
        {
            delays::minuteDelayVar = delay;
        }

        /// @brief Sets minute delay
        /// @param delay 
        void minuteDelay(int delay)
        {
            dt::set::minDelay(delay);
        }

        /// @brief Sets second delay
        /// @param delay 
        void secDelay(int delay)
        {
            delays::secondDelayVar = delay;
        }

        /// @brief Sets second delay
        /// @param delay 
        void secondDelay(int delay)
        {
            dt::set::secDelay(delay);
        }

        /// @brief Sets week delay
        /// @param delay 
        void weekDayDelay(int delay)
        {
            delays::weekDayDelayVar = delay;
        }

        /// @brief Sets day delay
        /// @param delay 
        void dayDelay(int delay)
        {
            delays::dayDelayVar = delay;
        }

        /// @brief Sets month delay
        /// @param delay 
        void monthDelay(int delay)
        {
            delays::monthDelayVar = delay;
        }

        /// @brief Sets month delay
        /// @param delay 
        void monDelay(int delay)
        {
            dt::set::monthDelay(delay);
        }

        /// @brief Sets a day delay
        /// @param delay 
        void monthDayDelay(int delay)
        {
            delays::monthDayDelayVar = delay;
        }

        /// @brief Sets a year delay
        /// @param delay 
        void yearDayDelay(int delay)
        {
            delays::yearDayDelayVar = delay;
        }

        /// @brief Sets a year delay
        /// @param delay 
        void yearDelay(int delay)
        {
            delays::yearDelayVar = delay;
        }
    }

    /// @brief Gets a value
    namespace get
    {
        /// @brief Gets current time
        struct tm *currentTime()
        {
            time_t TIME_NOW = time(NULL);

            return localtime(&TIME_NOW);
        }

        /// @brief Gets current hour
        /// @param now_tm 
        /// @return int
        int hour(struct tm *now_tm)
        {
            return now_tm->tm_hour - delays::hourDelayVar;
        }

        /// @brief Gets current minute
        /// @param now_tm 
        /// @return int
        int min(struct tm *now_tm)
        {
            return now_tm->tm_min - delays::minuteDelayVar;
        }

        /// @brief Gets current minute
        /// @param now_tm 
        /// @return int
        int minute(struct tm *now_tm)
        {
            return min(now_tm - delays::minuteDelayVar);
        }

        /// @brief Gets current second
        /// @param now_tm 
        /// @return int
        int sec(struct tm *now_tm)
        {
            return now_tm->tm_sec - delays::secondDelayVar;
        }
        
        /// @brief Gets current second
        /// @param now_tm 
        /// @return int
        int second(struct tm *now_tm)
        {
            return sec(now_tm - delays::secondDelayVar);
        }

        /// @brief Gets current week day
        /// @param now_tm 
        /// @return int
        int wday(struct tm *now_tm)
        {
            return now_tm->tm_wday - delays::weekDayDelayVar;
        }

        /// @brief Gets current week day
        /// @param now_tm 
        /// @return int
        int weekDay(struct tm *now_tm)
        {
            return dt::get::wday(now_tm - delays::weekDayDelayVar);
        }

        /// @brief Gets current day
        /// @param now_tm 
        /// @return int
        int day(struct tm *now_tm)
        {
            return now_tm->tm_mday - delays::dayDelayVar;
        }

        /// @brief Gets current month day
        /// @param now_tm 
        /// @return int
        int mday(struct tm *now_tm)
        {
            return dt::get::day(now_tm - delays::monthDayDelayVar);
        }

        /// @brief Gets current month day
        /// @param now_tm 
        /// @return int
        int monthDay(struct tm *now_tm)
        {
            return dt::get::day(now_tm - delays::monthDayDelayVar);
        }

        /// @brief Gets current month
        /// @param now_tm 
        /// @return int
        int month(struct tm *now_tm)
        {
            return now_tm->tm_mon - delays::monthDelayVar;
        }

        /// @brief Gets current month
        /// @param now_tm 
        /// @return int
        int mon(struct tm *now_tm)
        {
            return dt::get::month(now_tm - delays::monthDelayVar);
        }

        /// @brief Gets current day of the year
        /// @param now_tm 
        /// @return int
        int yDay(struct tm *now_tm)
        {
            return dt::get::day(now_tm - delays::yearDayDelayVar);
        }

        /// @brief Gets current day of the year
        /// @param now_tm 
        /// @return int
        int yearDay(struct tm *now_tm)
        {
            return now_tm->tm_yday - delays::yearDayDelayVar;
        }
        
        /// @brief Gets current year
        /// @param now_tm 
        /// @return int
        int year(struct tm *now_tm)
        {
            return now_tm->tm_year + 1900 - delays::yearDelayVar;
        }

        /// @brief Gets current time zone
        /// @param now_tm 
        /// @return const char*
        const char *zone(struct tm *now_tm)
        {
            return now_tm->tm_zone;
        }
    }

    namespace print
    {
        /// @brief Prints current hour to the screen
        void hour(struct tm *now_tm)
        {
            std::cout<<dt::get::hour(now_tm);
        }

        /// @brief Prints current minite to the screen
        void min(struct tm *now_tm)
        {
            std::cout<<dt::get::min(now_tm);
        }

        /// @brief Prints current minute to the screen
        void minute(struct tm *now_tm)
        {
            std::cout<<dt::get::min(now_tm);
        }

        /// @brief Prints current second to the screen
        void sec(struct tm *now_tm)
        {
            std::cout<<dt::get::sec(now_tm);
        }

        /// @brief Prints current second to the screen
        void second(struct tm *now_tm)
        {
            dt::print::sec(now_tm);
        }

        /// @brief Prints current month to the screen
        void month(struct tm *now_tm)
        {
            std::cout<<dt::get::month(now_tm);
        }

        /// @brief Prints current month to the screen
        void mon(struct tm *now_tm)
        {
            std::cout<<dt::get::month(now_tm);
        }

        /// @brief Prints current day of the week to the screen
        void wday(struct tm *now_tm)
        {
            std::cout<<dt::get::wday(now_tm);
        }
        
        /// @brief Prints current day of the week to the screen
        void weekDay(struct tm *now_tm)
        {
            std::cout<<dt::get::weekDay(now_tm);
        }
        
        /// @brief Prints current day to the screen
        void day(struct tm *now_tm)
        {
            std::cout<<dt::get::day(now_tm);
        }
        
        /// @brief Prints current day of the month to the screen
        void mday(struct tm *now_tm)
        {
            std::cout<<dt::get::mday(now_tm);
        }
        
        /// @brief Prints current day of the month to the screen
        void monthDay(struct tm *now_tm)
        {
            std::cout<<dt::get::monthDay(now_tm);
        }
        
        /// @brief Prints current day of the year to the screen
        void yDay(struct tm *now_tm)
        {
            std::cout<<dt::get::yDay(now_tm);
        }
        
        /// @brief Prints current day of the year to the screen
        void yearDay(struct tm *now_tm)
        {
            std::cout<<dt::get::yearDay(now_tm);
        }
        
        /// @brief Prints current year to the screen
        void year(struct tm *now_tm)
        {
            std::cout<<dt::get::year(now_tm);
        }
        
        /// @brief Prints current zone to the screen
        void zone(struct tm *now_tm)
        {
            std::cout<<dt::get::zone(now_tm);
        }
        
    }
}
