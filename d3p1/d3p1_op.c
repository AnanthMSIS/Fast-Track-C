#include <stdio.h>
#include "d3p1.h"

int binary_to_decimal(int binary)
{
    int decimal = 0, remainder;
    int base = 1;
    while(binary>0)
    {
        remainder = binary % 10;
        decimal = decimal + (remainder * base);
        binary = binary /10;
        base = base * 2;
    }
    return decimal;
}
int decimal_to_binary(int decimal)
{
    int i, rem, bin = 0;
    int base = 1;
    for(i = 0; decimal > 0; i++ )
    {
        rem = decimal % 2;
        bin = bin + (rem * base);
        base = base * 10;
        decimal = decimal / 2;
    }
    return bin;
}
