#include <stdio.h>
int main()
{
  int i,j,n,k;
  printf("enter the number:");
  scanf("%d",&n);
 for(i=1;i<n;i++)
   {
      for(k=1;k<n-i;k++)
        printf(" ");
     for(j=1;j<=i;j++)
       {
         printf("%c ",65+j-1);
         
       }
     printf("\n");
   }
  return 0;
  }