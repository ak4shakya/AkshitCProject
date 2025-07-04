#include<stdio.h>
int main()
{
    char C, D, E, F, G, T;
    printf("Enter name (5 charcters): ");
    scanf("%c %c %c %c %c", &C, &D, &E, &F, &G);
    T=C;
    C=D;
    D=T;
    T=E;
    E=F;
    F=T;
    printf("%c %c %c %c %c\n", G, E, F, C, D);
    return 0;
}