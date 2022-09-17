#include "d2p4.h"

int palindrome(int number)
{
    int reverse = 0;
    int temp, reminder;
    temp = number;
    while (number > 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }
    if(reverse == temp)
        return 0;
    else
        return 1;
}
