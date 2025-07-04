//Multiplication Table 25-6-25
#include<stdio.h>
void main(){
    int num;
    printf("Enter Number for Multiplication Table:");
    scanf("%d",&num);
    int i;
    int table;
    for(i=1;i<=10;i++) {
        table = num*i;
        printf("%d\n",table);
    }
}