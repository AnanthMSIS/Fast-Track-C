#include <stdio.h>
#include <stdlib.h>
#include "d4p2.h"

int main()
{
    int x, y;
    printf("Enter the numbers to be swapped: ");
    scanf("%d%d",&x,&y);
    printf("Numbers before swapping: x=%d and y=%d\n",x,y);
    swap_num(&x,&y);
    printf("Numbers after swapping: x=%d and y=%d\n",x,y);
    return 0;
}
