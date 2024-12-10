
#include<stdio.h>
int main()
{
    char arr[10];
    printf("enter 5 elements in array:\n");
    fgets(arr,sizeof arr,stdin);
    printf("%d",sizeof(arr));
    printf("the string is:");
    for(int i=0;i<5;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    for(int i=5;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}