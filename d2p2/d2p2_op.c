#include"d2p2.h"

int number_reverse(int number)
{
    int reverse = 0;
    int reminder;

    while(number > 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }
    return reverse;
}
