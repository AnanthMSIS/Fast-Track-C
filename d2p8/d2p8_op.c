#include <stdio.h>
#include "d2p8.h"

int amicable_number(int num)
{
    int i;
    int sum=0, sum2=0;
    for (i = 1; i <= num/2 ; i++)
    {
        if(num % i ==0)
            sum = sum + i;
    }
    for (i = 1; i <= sum/2 ; i++)
    {
        if(sum % i ==0)
            sum2 = sum2 + i;
    }
    if( sum2 == num)
        return 0;
    else
        return 1;
}
