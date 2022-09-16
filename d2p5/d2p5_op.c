#include <stdio.h>
#include "d2p5.h"

int display_prime(int size)
{
    int i;
    int count=1;
    for(i = 2; count <= size ; i++)
    {
        if( isprime(i) == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}
int isprime(int num)
{
    int i;
    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
            return 1;
    }
    return 0;
}

