#include "d1p1.h"

char upper_to_lower(char x)
{
    if(x >= 'A' && x <= 'Z')
        x = x + 32;

    return x;
}
