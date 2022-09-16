#include <stdio.h>
#include "d2p9.h"


int sum(int a, int b)
{
    return a+b;
}
int product(int a, int b)
{
    return a*b;
}
int difference(int a, int b)
{
    return a-b;
}
void display()
{
    printf("Select the operation to be performed \n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Exit\n");
}

