#include<stdio.h>
float div(float x, float y)
{
  float result=x/y;
  return result;
}
int main()
{
  float num1,num2,r;
  printf("Enter two numbers:");
  scanf("%d%d",&num1,&num2);
  r=div(num1,num2);
  printf("%.2f",r);
  return 0;
}
