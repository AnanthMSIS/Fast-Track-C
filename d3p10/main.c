#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "d3p10.h"

float main()
{
    int a, b, op;
    display();
    scanf("%d", &op);
    switch(op)
    {
        case 1: printf("Enter the number: ");
                scanf("%d", &a);
                return sqrt(a);
                break;
        case 2: printf("Enter the number: ");
                scanf("%d", &a);
                return log(a);
                break;
        case 3: printf("Enter the number: ");
                scanf("%d", &a);
                return log10(a);
                break;
        case 4: printf("Enter the base and exponent: ");
                scanf("%d%d", &a,&b);
                return pow(a, b);
                break;
        case 5: printf("Enter the value: ");
                scanf("%d", &a);
                return cos(a);
                break;
        case 6: exit(0);
        default: printf("Invalid Input ");

    }
    return 0;
}
