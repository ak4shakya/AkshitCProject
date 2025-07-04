#include<stdio.h>
void main()
{
    int num, d1, d2, d3, d4, d5, num_sum;
    printf("Enter a 5 digit number less then 32767: ");
    scanf("%d", &num);
    d5 = num % 10;
    num = num/10;
    d4 = num % 10;
    num = num/10;
    d3 = num % 10;
    num = num/10;
    d2 = num % 10;
    num = num/10;
    d1 = num % 10;
    num_sum = d1 + d2 + d3 + d4 + d5;
    printf("The sum of the digits are: %d\n",num_sum);
}