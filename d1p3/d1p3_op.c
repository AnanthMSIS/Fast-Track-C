#include "d1p3.h"
#include <math.h>

float simple_interest(float p, float t, float r)
{
    return ((p*t*r)/100);
}
float compound_interest(float p, float t, float r, float n)
{
    return (p*(pow(1+(r/n),(n*t))));
}
