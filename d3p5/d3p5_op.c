#include "d3p5.h"

int power(int base, int exp)
{
    if (exp != 0)
        return base*(power(base, exp-1));
    else
        return 1;
}
