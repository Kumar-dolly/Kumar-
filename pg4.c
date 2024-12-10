#include<stdio.h>
void swapByReferance(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
void swapByValue(int a,int b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int x=10,y=20;
    //callbyreferance
    printf("before the swap x=%d and y=%d\n",x,y);
    swapByReferance( &x, &y);
    printf("after the swap x=%d and y=%d",x,y);
    //callbyvalue
    printf("before the swap x=%d and y=%d\n",x,y);
    swapByValue( x, y);
    printf("after the swap x=%d and y=%d",x,y);
    return 0;
}