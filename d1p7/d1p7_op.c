#include "d1p7.h"

int power_of_n(int num)
{
    int decimal;
    int value = 1;
    for(int i = 0; i < num; i++)
        value = value << 1;
    decimal = binary_to_decimal(value);
    return decimal;
}

int binary_to_decimal(int binary)
{
    int base = 1;
    int reminder;
    int decimal = 0;
    while (binary > 0)
    {
        reminder = binary % 10;
        decimal = decimal + reminder * base;
        binary = binary / 10;
        base = base * 2;
    }
    return decimal;
}
