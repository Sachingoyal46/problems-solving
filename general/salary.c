#include<stdio.h>
int main()
{
float hra,basic ,da,pf,allow;
  int totalsalary;
  char grade;

  printf("enter your basic salary");
  scanf("%f",&basic);

  printf("enter your grade");
  scanf("%s",&grade);

  if(grade=='A')
  {
      allow=1700;
  }
  else if(grade=='B')
  {
    allow=1500;
  }
  else
  {
    allow=1300;
  }

  hra=basic*0.20;
  da=basic*0.50;
  pf=basic*0.11;

  totalsalary=hra+da+basic+allow-pf;

  printf("total salary of the employee is %d",totalsalary);
  return 0;
  
  
  
}