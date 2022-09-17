#include <stdio.h>
#include <stdlib.h>
#include "d2p10.h"

int main()
{
    int radius, height, width, length;
    int choice;
    float result;
    display();
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Enter the edge of the cube: ");
                scanf("%d",&length);
                result = area_of_cube(length);
                printf("Area of cube = %f",result);
                break;
        case 2: printf("Enter the length, height and width of the cuboid: ");
                scanf("%d%d%d",&length,&height,&width);
                result = area_of_cuboid(length,width,height);
                printf("Area of cuboid = %f",result);
                break;
        case 3: printf("Enter the radius and height of the cone: ");
                scanf("%d%d",&radius,&height);
                result = area_of_cone(radius, height);
                printf("Area of cone = %f",result);
                break;
        case 4: printf("Enter the radius and height of the cylinder: ");
                scanf("%d%d",&radius,&height);
                result = area_of_cylinder(radius, height);
                printf("Area of cylinder = %f",result);
                break;
        case 5: printf("Enter the radius of the sphere: ");
                scanf("%d",&radius);
                result = area_of_sphere(radius);
                printf("Area of sphere = %f",result);
                break;
        default: printf("Invalid choice \n");

    }
    return 0;
}
