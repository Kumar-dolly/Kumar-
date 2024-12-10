#include<stdio.h>
int factorial(int);
int main()
{
    int number=0;
    printf("enter a number");
    scanf("%d",&number);
    int fact=0;
    fact=factorial(number);
    printf("factorial of a number %d is :%d",number,fact);
    return 0;
}
int factorial(int num)
{
    int fact = 1;
    if(num!=1)
    {
        fact=num*factorial(num-1);
        return fact;
    }
    else
    {
        return 1;
    }
}