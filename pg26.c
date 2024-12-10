#include <stdio.h>
int main()
{
    char str[100];
    int length=0;
    int digitcount=0;
    int alphacount=0;
    int symbcount=0;
    printf("enter string:\n");
    fgets(str,sizeof str,stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0;i<length-1;i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='a'&&str[i]<='z'))
        {
            alphacount++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digitcount++;
        }
        else
        {
            symbcount++;
        }
    }
    printf("no of alphabets in a string is:%d\nNo. of digits in a string is:%d\nNo. of special characters in a string is:%d",alphacount,digitcount,symbcount);
    return 0;
}