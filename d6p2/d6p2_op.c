#include <stdio.h>
#include "d6p2.h"

void read(complx *a)
{
    printf("\nEnter the real value of complex number: ");
    scanf("%d",&(a->r));
    printf("\nEnter the imaginary value of complex number: ");
    scanf("%d",&(a->i));
}

void display(complx *a)
{
    printf("\nThe resultant is : %d +(%d)i", (a->r), (a->i));
}

struct comp add(struct comp *a, struct comp *b)
{
    complx z;
    z.r = (a->r) + (b->r);
    z.i = (a->i) + (b->i);

    return z;
}

struct comp sub(struct comp *a, struct comp *b)
{
    complx z;
    z.r = (a->r) - (b->r);
    z.i = (a->i) - (b->i);

    return z;
}

struct comp mul(struct comp *a, struct comp *b)
{
    complx z;
    z.r = ((a->r)*(b->r))+((a->i)*(b->i)*(-1));
    z.i = ((a->r)*(b->i))+((a->i)*(b->r));

    return z;
}
