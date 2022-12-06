#include<stdio.h>
int main()
{
  int r,c,sp;

  for(r=1;r<=5;r++)
    {
      for(c=1;c<=r;c++)
        {
          printf("%d",c);
        }
      for(sp=4;sp>=r;sp--)
        {
          printf(" ");
        }
      for(sp=4;sp>=r;sp--)
        {
          printf(" ");
        }
      for(c=r;c>=1;c--)
        {
          printf("%d",c);
        }
  printf("\n");
    }
  return 0;
}