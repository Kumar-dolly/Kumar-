#include <stdio.h>
int change(int *);
int main()
{
    int x=10;
    int c=0;
    printf("before change x is %d\n",x);
    printf("adderss of x:%p\n",&x);
    c=change(x);
    printf("after change x is %d\n",c);
    return 0;
}
int change(int *num)
{
    int x=20;
    num=x;
    //num=&x;
    printf("inside function x is %d\n",num);
    return num;
}
