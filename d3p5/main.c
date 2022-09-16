#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "d3p5.h"

int main()
{
    assert(power(2, 3) == 8);
    assert(power(2, 10) == 1024);
    return 0;
}
