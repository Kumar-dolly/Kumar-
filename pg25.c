#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    int count=1;
    printf("enter the string:\n");
    fgets(str,sizeof str,stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0;i<=length-1;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("total words in a string are:%d",count);
    return 0;
}