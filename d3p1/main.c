#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "d3p1.h"

int main()
{
    assert(binary_to_decimal(1001) == 9);
    assert(decimal_to_binary(15) == 1111);
    return 0;
}
