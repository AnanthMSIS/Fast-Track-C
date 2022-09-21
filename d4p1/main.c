#include <stdio.h>
#include <stdlib.h>
#include "d4p1.h"

int main()
{
    int a[] = {4, 6, 1, 15, 87, 39, 26, 2, 11, 69};
    ascending(a);
    print(a);
    descending(a);
    print(a);
    return 0;
}
