#include<stdio.h>
int digroot(int x)
{
  while(x>=10)
  {
    int sum=0;
    while(x>0)
    {
     int sum=sum+(x%10);
      x=x/10;
    }
    x=sum;
    return sum;
  } 
}    
  int main()
  {
    int num1,r;
    printf("Enter number:");
    scanf("%d",&num1);
    r=digroot(num1);
    printf("Digital root is %d",r);
    return 0;
  }
