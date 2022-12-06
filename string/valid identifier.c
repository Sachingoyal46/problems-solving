#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0;
    char s[10];
    printf("enter the strig ");
    gets(s);
    if(s[0]=='_' || (s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z'))
    {
        int i=1;
        while(s[i]!='\0')
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'|| s[i]>=0 && s[i]<=9 || s[i]=='_' || s[i]=='$')
            {
                i++;
            }
            else
            {
                flag=1;
                break;
            }
        }

    }
    else
    flag=1;

    if(flag==0 && strlen(s)<32)

    printf("valid \n");

        
    
    else

    printf("invaid");
}