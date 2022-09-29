#include <stdio.h>
#include <stdlib.h>
#include "d6p2.h"

int main()
{
    complx a, b, sum, product, differ;
    read(&a);
    read(&b);
    sum = add(&a,&b);
    product = mul(&a,&b);
    differ = sub(&a,&b);
    display(&sum);
    display(&product);
    display(&differ);
    return 0;
}
