#include <stdio.h>
#include "d3p3.h"

int design(int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(j>=i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}
