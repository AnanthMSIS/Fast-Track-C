#include "d2p7.h"

int armstrong(int num)
{
    int temp, rem;
    int sum = 0;
    temp = num;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum +(rem*rem*rem);
        temp = temp /10;
    }
    if (sum == num)
        return 0;
    else
        return 1;
}
