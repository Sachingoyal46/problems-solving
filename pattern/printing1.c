#include <stdio.h>
int main(){
  int i,j;
  
  for(i=1;i<=5;i++)
    
    {
      int k=5;
   for(j=i;j>=1;j--)
     {
       printf("%d  ",k);
       k--;
     }
      printf("\n");
      }
  return 0;
  }