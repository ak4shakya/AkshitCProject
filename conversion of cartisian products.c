#include<stdio.h>
#include<math.h>
void main()
{
    int coord_x, coord_y;
    float polar_x, polar_y;
    printf("Enter the cartisian coordinates (x,y): ");
    scanf("%d %d", &coord_x, &coord_y);
    polar_x = sqrt(pow(coord_x, 2.0) + pow(coord_y, 2.0));
    polar_y = atan(coord_y/coord_x);
    printf("The polar coordinates are: %f %f", polar_x, polar_y);
}