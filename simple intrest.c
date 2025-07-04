//Simple Intrest Program
#include<stdio.h>
void main(){
    float si,prin_amount,time,rate;
    printf("Enter Principle_Amount,Time, and Rate:");
    scanf("%f %f %f",&prin_amount,&time,&rate);
    si = prin_amount*time*rate/100;
    printf("The Simple Intrest is:%f",si);
}