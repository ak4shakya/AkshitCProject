//Perimeter and Area Input  26-6-25
#include<stdio.h>
void main()
{
    float length;
    float width;
    float radius;
    printf("Enter Length, Width, and Radius of Rectangle and Circle:\n");
    scanf("%f %f %f",&length, &width, &radius);
    float perimeter = (length + width)*2;
    float area = length*width;
    float circumference = 2*3.14*radius;
    float area_c = 3.14*radius*radius;
    printf("The perimeter and area of rectangle is: %f %f\n", perimeter, area);
    printf("The circumference and area of circle is: %f %f\n", circumference, area_c);
}