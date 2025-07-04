//Latitude and Longitude conversion into nautical miles
#include<stdio.h>
#include<math.h>
int main()
{
    float lat_L1, lat_L2, long_G1, long_G2, Distance_D;
    printf("Enter Latitude(L1,L2): ");
    scanf("%f %f", &lat_L1, &lat_L2);
    printf("Enter Longitude(G1,G2): ");
    scanf("%f %f", &long_G1, &long_G2);
    Distance_D = 3963*acos(sin(lat_L1)*sin(lat_L2) + cos(lat_L1)*cos(lat_L2)*cos(long_G2 - long_G1));
    printf("The distance between the 2 places in nautical miles: %f", Distance_D);
    return 0;
}