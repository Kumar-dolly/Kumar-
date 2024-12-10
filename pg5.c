#include<stdio.h>
int reversenumber(int num)
{ 
    int rem=0,sum=0;
    while(num>0)
    {
        rem=rem%10;
        sum=sum*10+rem;
        num=num/10;
    }
    return 0;
} 
int main()
{
    int number=0,rev=0;
    printf("please enter your number:");
    scanf("%d",&number);
    rev=reversenumber(number);
    printf("reverse of a number %d is = %d",number,rev);
    return 0;
}
