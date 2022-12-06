int  power(int b,int p)
{  
  int i,a=1;
  
  for(i=1;i<=p;i++)
    a=a*b;
      
    
  return a;
}

int main()
{
  int x,b,p;
  printf("enter the base\n");
  scanf("%d",&b);
  printf("enter the power\n");
  scanf("%d",&p);
  x=power(b,p);
  printf("%d",x);
  return 0;
  
  
 }
