#include<stdio.h>
int gcd(int a, int b)
{
  if(a>b)
  {
    int k=a;
    
  }
  else
  {
    int k=b;
  }
  int k;
  again:if(a%k==0 && b%k==0)
  {
    return k;
  }
  else
  {
    k=k-1;
    goto again;
  }
  
}

int main()
{
  int x,y,c;
  printf("Enter two number:");
  scanf("%d%d",&x,&y);
  c=gcd(x,y);
  printf("The GCD is %d",c);
  return 0;
}
