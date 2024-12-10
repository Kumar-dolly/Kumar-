#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    char temp='\0';
    printf("enter string:\n");
    fgets(str,sizeof str,stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-1;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[i];
                str[i]=temp;
            }
        }
    }
    for(int i=0;i<length-1;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}