#include <stdio.h>
#include <stdlib.h>
#include "d2p9.h"

int main()
{
    int op,a,b,result;
    while(1)
    {
        display();
        scanf("%d",&op);
        switch(op)
        {
        case 1: printf("Enter two integers: ");
                scanf("%d%d",&a,&b);
                result = sum(a,b);
                break;
        case 2: printf("Enter two integers: ");
                scanf("%d%d",&a,&b);
                result = difference(a,b);
                break;
        case 3: printf("Enter two integers: ");
                scanf("%d%d",&a,&b);
                result = product(a,b);
                break;
        case 4: exit(0);
        default: printf("Invalid input\n");
        }
        printf("result = %d\n", result);
    }
    return 0;
}
