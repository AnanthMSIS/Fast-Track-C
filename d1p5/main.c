#include "d1p5.h"
#include <assert.h>
int main()
{
    assert(even_or_odd(2) == 0);
    assert(even_or_odd(3) == 1);

    assert(even_or_odd(5) == 1);
    return 0;
}
