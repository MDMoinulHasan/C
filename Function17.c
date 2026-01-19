#include<stdio.h>
int maximum(int num[100], int n)
{
  int i;
  int max=num[0];
  for(i=1; i<n; i++)
  {
    if(num[i]>max)
    {
     max=num[i];
    }
  }
  return max;
}

int main()
{
 int num[100],i,n,result;

 printf("How many numbers?\n");
 scanf("%d",&n);

 printf("Enter %d numbers\n",n);
 for(i=0; i<n; i++)
 {
   scanf("%d\n",&num[i]);
 }

  result=maximum(num,n);
  printf("\nMaximum is  %d",result);
  return 0;
}