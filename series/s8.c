#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,sign=1;
  float sum=1,x,f=1;
  printf("Enter limit:");
  scanf("%d",&n);
  printf("Enter degree:");
  scanf("%f",&x);

  x=(x*3.14)/180.0;
  for(i=1;i<=n;i++)
    {
      f=f*i;
      if(i%2==0)
      {
      sum=sum-(pow(x,i)/f)*sign;
        sign=sign*(-1);
    }
}
  printf("%f",sum);
  }