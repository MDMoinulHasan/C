#include<stdio.h>
int max(int x, int y)
{
  if(y>x)
  {
    return y;
  }
  else
  {
    return x;
  }
  
  
}
int main()
{
  int num1,num2,r;
  printf("Enter two numbers:");
  scanf("%d%d",&num1,&num2);
  r=max(num1,num2);
  printf("Maximum is %d",r);
  return 0;
}
