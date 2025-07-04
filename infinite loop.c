#include<stdio.h>   // hi this is a test

int main(){
    int num, fact, temp_num;
    printf("Enter Number:");
    scanf("%d", &num);
    fact = 1;
    temp_num = 1;
    
    if (num==0 || num==1)
        fact=1;
    else
        /*while (temp_num>=1){
            fact = temp_num*fact;
            temp_num--;
        }*/
        while (temp_num<=num){
            fact = temp_num*fact;
            temp_num++;
        }
    printf("The Factorial of %d is: %d", num, fact);
}