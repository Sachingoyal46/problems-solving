#include<stdio.h>

#include<math.h>
int main()
{
  float a,b,c,d;
  float x,y;
  printf("enter the value of coefficient x^2\n");
  scanf("%f",&a);
   printf("enter the value of coefficient x\n");
  scanf("%f",&b);
   printf("enter the value of constant\n");
  scanf("%f",&c);

  d=b*b-4*a*c;

  if(d>0)
  {
    printf("real and distinct");
  }
  else if(d==0)
  {
    printf("roots are equal");
  }
  else
  {
    printf("roots are imaginary and distinct");
  }

  printf("value of roots are=>\n");

  x=(-b-pow(d,0.5))/(2*a);
  y=(-b+pow(d,0.5))/(2*a);

  printf("%f and %f",x,y);
  return 0;
  
  
}