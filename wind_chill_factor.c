//Calculation of Wind chill factor
#include<stdio.h>
#include<math.h>
int main()
{
    float temp_t, vel_v, wcf;  //wcf = wind chill factor
    printf("Enter the values of Temperature and Velocity: ");
    scanf("%f %f", &temp_t, &vel_v);
    wcf = 35.74 + 0.6215*temp_t + (0.4275*temp_t - 35.75)*pow(vel_v,0.16);
    printf("The wind chill factor is: %f", wcf);
    return 0;
}