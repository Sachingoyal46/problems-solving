#include<stdio.h>
int main()
{
    int a[10][10] ,i,j,n;
    printf("enter the size of first array:");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
           a[i][j]=0;
        }
    }
    a[0][1]=1;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n+1;j++)
        {
            a[i][j]=a[i-1][j-1] + a[i-1][j];
        }
    }
    
   
   for(i=0;i<n;i++)
   {
        for(j=0;j<n-i;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
   }
    return 0;

}