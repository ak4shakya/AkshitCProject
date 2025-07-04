#include <stdio.h>
int main()
{
    int phy, chem, bio, math, comp; 
    float percentage; 
    printf("Enter five subjects marks: ");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);
    percentage = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %f\n", percentage);
}