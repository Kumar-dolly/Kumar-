#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
      printf("Enter the value of b");
    scanf("%d",&b);
    if(a==b)
      printf("Entered values are equal");
    else
      printf("Entered values are not equal");
    return 0;
}