#include <stdio.h>
#include "d3p2.h"

void sum_of_seq(int n)
{
    int n1 = 0, n2 = 0, n3 = 1;
    int i, sum;
    printf("%d %d %d ", n1, n2, n3);
    for (i = 0; i < n - 3; i++)
    {
        sum = n1 + n2 + n3;
        printf("%d ", sum);
        n1 = n2;
        n2 = n3;
        n3 = sum;
    }

}
