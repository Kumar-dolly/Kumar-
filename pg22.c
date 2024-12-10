#include<stdio.h>
int main()
{
    char arr[10];
    printf("enter 5 elements in array:\n");
    fgets(arr,sizeof arr,stdin);
    printf("the string is:");
    for(int i=0;i<5;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}