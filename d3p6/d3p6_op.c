#include "d3p6.h"

int factorial(int num)
{
    if( num > 1)
        return num * factorial(num - 1);
    else
        return 1;
}
