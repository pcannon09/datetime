# Datetime
## 1.1.0
### By: Paul Cannon Palacios

---

First, you need to create a Makefile to do it easier, just copy the IO Controller Makefile and change the .o files to the ones that you want (DON'T GET RID OF 'dt.o')

To include

```cpp
#include "path/to/project/dt.hpp"
```

How to get time:

```cpp
struct tm *timeNow = dt::get::currentTime(); // Gets / updates time

int hourVariable = dt::get::hour(timeNow); // Gets hour
int minVariable = dt::get::min(timeNow); // Gets min
int minuteVariable = dt::get::minute(timeNow); // Gets minute
int secondVariable = dt::get::second(timeNow); // Gets second
int weekDayVariable = dt::get::weekDay(timeNow); // Gets day of the week
int dayVariable = dt::get::day(timeNow); // Gets day
int monthDayVariable = dt::get::monthDay(timeNow); // Gets the day of the month
int monthVariable = dt::get::month(timeNow); // Gets month
int yearDayVariable = dt::get::yearDay(timeNow); // Gets Day of year
int yearVariable = dt::get::year(timeNow); // Gets year

const char *timeZone = dt::get::zone(timeNow); // Gets time zone
```

To print time directly to the screen, you can do:

```cpp
dt::print::hour(timeNow); // Prints hour to the screen
dt::print::min(timeNow); // Prints min to the screen
dt::print::minute(timeNow); // Prints minute to the screen
dt::print::second(timeNow); // Prints second to the screen
dt::print::weekDay(timeNow); // Prints day of the week to the screen
dt::print::day(timeNow); // Prints day to the screen
dt::print::monthDay(timeNow); // Prints the day of the month to the screen
dt::print::month(timeNow); // Prints month to the screen
dt::print::yearDay(timeNow); // Prints Day of year to the screen
dt::print::year(timeNow); // Prints year to the screen

dt::print::zone(timeNow); // Prints time zone to the screen
```

There are these variables in namespace dt::delay:
```cpp
int hourDelayVar;
int minuteDelayVar;
int secondDelayVar;
int weekDayDelayVar;
int dayDelayVar;
int monthDayDelayVar;
int monthDelayVar;
int yearDayDelayVar;
int yearDelayVar;
```

You can do this:
```cpp
// You can directly do this
dt::delays::var = value;

// Or do this
hourDelay(int delay);
minDelay(int delay);
minuteDelay(int delay);
secDelay(int delay);
secondDelay(int delay);
weekDayDelay(int delay);
dayDelay(int delay);
monthDelay(int delay);
monDelay(int delay);
monthDayDelay(int delay);
yearDayDelay(int delay);
yearDelay(int delay);
```
