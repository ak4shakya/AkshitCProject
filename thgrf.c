#include<stdio.h>
int main() 
{
    char a, b, c, d;
    char temp;
    printf("Enter Name (4 characters):");
    scanf("%c %c %c %c", &a, &b, &c, &d);
    temp = a;
    a = b;
    b = temp;
    temp = c;
    c = d;
    d = temp;
    printf("%c %c %c %c\n", c, d, a, b);
    return 0;
}