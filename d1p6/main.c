#include <assert.h>
#include "d1p6.h"

int main()
{
    assert(leap_year_or_not(2000) == 0);
    assert(leap_year_or_not(2001) == 1);

    return 0;
}
