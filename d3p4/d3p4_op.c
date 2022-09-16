#include <stdio.h>
#include "d3p4.h"

int addition(int num)
{
    int rem, temp, sum;
    rem = num % 10;
    temp = num / 10;
    sum = rem + temp;
    return sum;
}
void check_divisibilty(int num)
{
    int sum;
    sum = addition(num);
    if (sum % 7 == 0)
        printf("%d ", num);
}
