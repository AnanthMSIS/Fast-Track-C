#include <stdio.h>
#include "d2p6.h"

int series_sum(int n)
{
    int sum=0;
    int num=0;
    int i;
    for(i = 0; i < n; i++)
    {
        num = num * 10 + 1;
        printf("%d \n", num);
        sum = sum + num;
    }
    printf("sum = %d ", sum);
    return 0;
}
