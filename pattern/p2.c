#include<stdio.h>
int main()
{
  int i,n,j;
  printf("enter the number:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
        {
          printf("%d ",i+j-1);
        }
      printf("\n");
    }
  
}