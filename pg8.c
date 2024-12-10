#include<stdio.h>
int main()
{
    int x=10;
    int*p=&x;
    printf("value of x:%d",x);
    printf("\nAddress of x:%p",&x);
    printf("\npointer p:%d",p);
    printf("\n p:%p",p);
    printf("\nAddress of p:%p",&p);
}