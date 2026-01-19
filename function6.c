#include<stdio.h>
int digsum(int x)
{
  int sum=0;

  while(x>0)
  {
    sum=sum+(x%10);
    x=x/10;
  }

  return sum;
}  
  
int main()
{
  int num1,r;
  printf("Enter number:");
  scanf("%d",&num1);
  r=digsum(num1);
  printf("Digital sum is %d",r);
  return 0;
}
