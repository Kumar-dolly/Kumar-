#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    printf("enter the string:\n");
    fgets(str,sizeof str,stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    printf("length of the string is:%d\n\n",length-1);

    return 0;
}