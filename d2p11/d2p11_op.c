#include <stdio.h>
#include "d2p11.h"

float elec_bill(int units)
{
    float total_charge;
    if (units <= 200)
        total_charge = units * 1; //1Rs till 200 units
    else if (units <= 300)
        total_charge = 200 + ((units - 200)*1.5);
    else
        total_charge = 350 + ((units - 300)*2);

    return total_charge;
}

void print_bill(float total_charge, int units)
{
    printf("Total charge for %d units is Rs. %f ", units, total_charge);
}
