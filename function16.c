#include<stdio.h>
int minimum(int num[100], int n)
{
  int i;
  int min=num[0];
  for(i=1; i<n; i++)
  {
    if(num[i]<min)
    {
     min=num[i];
    }
  }
  return min;
}

int main()
{
 int num[100],i,n,result;
 printf("How many numbers?\n");
 scanf("%d",&n);
 printf("Enter %d numbers\n",n);
 for(i=1; i<n; i++)
 {
   scanf("%d",&num[i]);
 }
  result=minimum(num,n);
  printf("\nMinimum is  %d",result);
  return 0;
}