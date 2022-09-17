#include "d2p3.h"

int count_repetition(int number, int key)
{
    int count = 0;
    int reminder;
    while(number > 0)
    {
        reminder = number % 10;
        if (reminder == key)
            count++;
        number = number / 10;
    }
    return count;
}
