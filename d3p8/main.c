#include "d3p8.h"
#define concat(a, b) a##b

int main()
{
    int c;
    c = concat(87, 3);
    printf("%d ", c);
    return 0;
}
