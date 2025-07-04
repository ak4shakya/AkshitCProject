#include<stdio.h>
int main()
{
    int temp_num, num_user, rev_num, d1, d2, d3, d4, d5;
    printf("Enter a 5 digit Number:");
    scanf("%d", &num_user);
    temp_num = num_user;
    d5 = temp_num%10;
    temp_num = temp_num/10;
    d4 = temp_num%10;
    temp_num = temp_num/10;
    d3 = temp_num%10;
    temp_num = temp_num/10;
    d2 = temp_num%10;
    temp_num = temp_num/10;
    d1 = temp_num%10;
    rev_num = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    printf("The Reversed Number is:%d\n", rev_num);
    if(num_user == rev_num)
    {
        printf("The number is equal to its reverse");
    }
    else    
    {
        printf("The number is not equal to its reverse\n");
    }
    return 0;
}
        