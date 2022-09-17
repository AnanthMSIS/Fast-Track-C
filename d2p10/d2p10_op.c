#include <stdio.h>
#include"d2p10.h"
#define PIE 3.1415

int area_of_cube(int edge)
{
    return edge*edge*edge;
}
int area_of_cuboid(int length,int width,int height)
{
    return length*width*height;
}
float area_of_sphere(int radius)
{
    return ((4/3)*PIE*radius*radius*radius);
}
float area_of_cylinder(int radius,int height)
{
    return (PIE*radius*radius*height);
}
float area_of_cone(int radius,int height)
{
    return (PIE*radius*radius*height/3);
}
void display()
{
    printf("Choose the solid to find area : \n");
    printf("1. Cube\n2. Cuboid\n3. Cone\n4. Cylinder\n5. Sphere\n");
}
