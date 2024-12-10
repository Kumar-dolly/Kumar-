#include <stdio.h>
int main()
{
    int x=0,y=0;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);
    printf("address of x:%p",&x);
    printf("address of x:%p",&y);
    int *p=&x,*q=&y;
    if(*p>*q)
    {
        printf("max number is:%d",*p);
        printf("address:%p",p);
    }
    else
    {
        printf("max number is:%d",*q);
        printf("address :%p",q);
    }
    return 0;
}