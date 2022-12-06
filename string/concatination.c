#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[10];
    int i=0,j=0;
    printf("enter the string\n");
    gets(s1);
    gets(s2);

    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    puts(s1);
    return 0;
}