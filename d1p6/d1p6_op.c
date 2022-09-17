#include "d1p6.h"

int leap_year_or_not(int year)
{
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
        return 0;
    else
        return 1;
}
