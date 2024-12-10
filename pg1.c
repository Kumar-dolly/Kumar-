#include <stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int main()
{
    int a=0;
    int b=0;
    int total=0;
    int number=0;
    printf("please select an operation to perform");
    printf("1.addition\n2.subration\n3.multipliction\n4.division\n5.modules\n");
    scanf("%d",&number);
    switch(number)
    {
        case1:printf("enter a first number:");
              scanf("%d",&a);
              printf("enter a second number:");
              scanf("%d",&b);
              total=sum(a,b);
              printf("\n-----------------------\n");
              printf("sum is:%d",total);
              printf("\n-----------------------\n");
              break;
        case2:printf("enter a first number:");
              scanf("%d",&a);
              printf("enter a second number:");
              scanf("%d",&b);
              total=sum(a,b);
              printf("\n-----------------------\n");
              printf("sum is:%d",total);
              printf("\n-----------------------\n");
              break;
        case3:printf("enter a first number:");
              scanf("%d",&a);
              printf("enter a second number:");
              scanf("%d",&b);
              total=sum(a,b);
              printf("\n-----------------------\n");
              printf("sum is:%d",total);
              printf("\n-----------------------\n");
              break;
        case4:printf("enter a first number:");
              scanf("%d",&a);
              printf("enter a second number:");
              scanf("%d",&b);
              total=sum(a,b);
              printf("\n-----------------------\n");
              printf("sum is:%d",total);
              printf("\n-----------------------\n");
              break;
              return 0;                          
    }
    int sub(int a,int b)
    {
        //function defination
            int s=0;
            if(a>b)
            {
                s=a-b;
            }
            else
            {
                s=b-a;
            }
            return s;
    }
}   
