#include<stdio.h>
int main()




{
  int n,j,i,k;
  printf("enter the no of rows\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      int num=1; 
      for(j=0;j<n-i+1;j++)
        {
          printf(" ");
          
        }
      for(k=0;k<=i;k++)
        {
          printf("%d",num);
          printf(" ");
          num=num*(i-k)/(k+1);
        }
      printf("\n");
      
    }
}