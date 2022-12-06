#include<stdio.h>
int main()
{
  int i,n,j,k;
  printf("enter the number:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
     
      for(j=1;j<=i;j++)
        {
          printf("%c ",64+n+j-i);
        }
      printf("\n");
    }
}