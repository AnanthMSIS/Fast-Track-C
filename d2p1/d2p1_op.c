#include "d2d1.h"

int sum_of_digits(int number)
{
    int sum=0;
    int reminder;
    while(number > 0)
    {
        reminder = number % 10;
        sum += reminder;
        number = number / 10;
    }
    return sum;
}
