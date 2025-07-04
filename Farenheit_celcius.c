/*Farenheit to Celcius  26-6-25*/
#include<stdio.h>
void main()
{
    int temp_f;
    printf("Enter Temperature in Farenheit:");
    scanf("%d",&temp_f);
    int temp_c = (temp_f - 32)*5/9;
    printf("Temperature in Celcius is:%d\n",temp_c);
}