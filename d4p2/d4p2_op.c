#include "d4p2.h"

int swap_num(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
