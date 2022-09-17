#include <stdio.h>
#include <stdlib.h>
#include "d1p3.h"

int main()
{
    float si,ci;
    si = simple_interest(5000, 2, 18);
    ci = compound_interest(5000, 2, 18, 2);
    printf("si= %.3f\n ci=%.3f", si,ci);
    return 0;
}
