#include <stdio.h>
int sumOfRange(int);
int main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int sum=sumOfRange(number);
    printf("sum of %d is =%d",number,sum);
    return 0;
}
int sumOfRange(int num)
{
    int res;
    if(num==1)
    {
        return 1;
    }
    else
    {
        res=num+sumOfRange(num-1);
    }
    return res;
}