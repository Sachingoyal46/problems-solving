#include <stdio.h>
int main()
{
  int i,j,n;
  printf("enter the number:");
  scanf("%d",&n);
 for(i=1;i<n;i++)
   {
     int k=i+n+1;
     for(j=1;j<=i;j++)
       {
         printf("%c  ",65+7-j);
         
       }
     printf("\n");
   }
  return 0;
  }