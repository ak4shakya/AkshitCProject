#include<stdio.h>
int main()
{
    const int divisor=10;
    int i = 1,a=10000, temp_num, num_user, rev_num,step,cur_val,final_val,num_len=1;
    printf("Enter a 5 digit Number:");
    scanf("%d", &num_user);
    temp_num = num_user;
   

    while(i<=5){
    //printf("%d\n", a);
    step = temp_num%divisor;
    temp_num = temp_num/divisor;
    cur_val=step*a;
    rev_num=rev_num+cur_val;
    a = a/divisor; 
      h 
    i = i + 1;
    }
    
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