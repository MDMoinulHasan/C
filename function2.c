#include<stdio.h>
int min(int x, int y)
{
  if(x>y)
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
  r=min(num1,num2);
  printf("Minimum is %d",r);
  return 0;
}
