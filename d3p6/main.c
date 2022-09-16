#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "d3p6.h"

int main()
{
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);

    return 0;
}
