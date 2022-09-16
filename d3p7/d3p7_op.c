#include "d3p7.h"
float expression (int x, int n)
{
    int i = 1;
    if(i < n+1)
        return ((i*x)/factorial(i))+ expression(i+2, n);
        //return (power(x, i)/factorial(i))+expression(i+2, n);
    else
        return 0;
}
int power(int base, int exp)
{
    if (exp != 0)
        return base*(power(base, exp-1));
    else
        return 1;
}
int factorial(int num)
{
    if( num > 1)
        return num * factorial(num - 1);
    else
        return 1;
}

