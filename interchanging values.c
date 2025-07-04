#include<stdio.h>
int main()
{
    char C, D, T;
    printf("Enter the values of C and D: ");
    scanf("%c %c", &C, &D);
    T=C;
    C=D;
    D=T;
    printf("%c %c\n", C, D);
    return 0;
}