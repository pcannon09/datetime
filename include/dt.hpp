#pragma once

#include "dt.hpp"

#include <iostream>
#include <time.h>

#define SET_TIME                        struct tm

namespace dt
{
    namespace delays
    {
        extern int hourDelayVar;
        extern int minuteDelayVar;
        extern int secondDelayVar;
        extern int weekDayDelayVar;
        extern int dayDelayVar;
        extern int monthDayDelayVar;
        extern int monthDelayVar;
        extern int yearDayDelayVar;
        extern int yearDelayVar;

        void reset();
    }
 
    namespace set
    {
        /* You can set delay manualy doing:
            * delays::variable = value;
        */

        void hourDelay(int delay);
        void minDelay(int delay);
        void minuteDelay(int delay);
        void secDelay(int delay);
        void secondDelay(int delay);
        void weekDayDelay(int delay);
        void dayDelay(int delay);
        void monthDelay(int delay);
        void monDelay(int delay);
        void monthDayDelay(int delay);
        void yearDayDelay(int delay);
        void yearDelay(int delay);
    }

    namespace get
    { 
        struct tm *currentTime();

        int hour(struct tm *now_tm);
        int min(struct tm *now_tm);
        int minute(struct tm *now_tm);
        int month(struct tm *now_tm);
        int mon(struct tm *now_tm);
        int sec(struct tm *now_tm);
        int second(struct tm *now_tm);
        int wday(struct tm *now_tm);
        int weekDay(struct tm *now_tm);
        int day(struct tm *now_tm);
        int mday(struct tm *now_tm);
        int monthDay(struct tm *now_tm);
        int yearDay(struct tm *now_tm);
        int yDay(struct tm *now_tm);
        int yearDay(struct tm *now_tm);
        int year(struct tm *now_tm);
        const char *zone(struct tm *now_tm);
    }

    namespace print
    {
        void hour(struct tm *now_tm);
        void min(struct tm *now_tm);
        void minute(struct tm *now_tm);
        void sec(struct tm *now_tm);
        void second(struct tm *now_tm);
        void wday(struct tm *now_tm);
        void month(struct tm *now_tm);
        void mon(struct tm *now_tm);
        void weekDay(struct tm *now_tm);
        void day(struct tm *now_tm);
        void mday(struct tm *now_tm);
        void monthDay(struct tm *now_tm);
        void yearDay(struct tm *now_tm);
        void yDay(struct tm *now_tm);
        void yearDay(struct tm *now_tm);
        void year(struct tm *now_tm);
        void zone(struct tm *now_tm);
    }
}
