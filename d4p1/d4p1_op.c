#include <stdio.h>
#include "d4p1.h"

int ascending(int * arr)
{
    int i, j, temp;
    //int *d_arr;
    //d_arr = (int *)malloc(sizeof(int)*SIZE);
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE-i-1; j++)
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    return 0;
}

int descending(int * arr)
{
    int i, j, temp;
    //int *d_arr;
    //d_arr = (int *)malloc(sizeof(int)*SIZE);
    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE-i-1; j++)
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    return 0;
}

int print(int * arr)
{
    int i;
    for(i = 0; i < SIZE; i++)
        printf("%d\t", arr[i]);

    printf("\n\n");
    return 0;
}
