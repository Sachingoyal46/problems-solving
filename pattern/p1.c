#include<stdio.h>
int main()
{
  int i,n,j;
  printf("enter the number:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=i;j>0;j--)
        {
          printf("%d ",j);
        }
      printf("\n");
    }
  
}