#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    gets(s1);
    int i,j;
    int x=strlen(s1);
    for(i=x;i>=0;i--)
    {
        for(j=x;j>=i;j--)
        {
            printf("%c",s1[j]);
        }
        printf("\n");
    }

}