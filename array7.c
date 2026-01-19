#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter number:");
  scanf("%d",&n);
  if(n>0)
  {
    for(i=2; i<n; i++)
    {
      if(n%i==0 && n!=i)
      {
        printf("Not Prime");
        break;
      }
      
      else 
      {
        printf("Prime");
        break;
      }
    }
    
  }
  else
  {
    printf("Invalid");
  }
  return 0;
}