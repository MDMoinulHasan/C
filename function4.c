#include<stdio.h>
int min(int x, int y, int z)
{
  if(x<y && x<z)
  {
    return x;
  }
  else if(y<x && y<z)
  {
    return y;
  }
  else
  {
    return z;
  }
  
  
}
int main()
{
  int num1,num2,num3,r;
  printf("Enter three numbers:");
  scanf("%d%d%d",&num1,&num2,&num3);
  r=min(num1,num2,num3);
  printf("Minimum is %d",r);
  return 0;
}
