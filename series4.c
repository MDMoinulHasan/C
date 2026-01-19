#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the last number:");
scanf("%d",&n);
for(i=4; i<=n; i=i+8)
sum=sum+i;
printf("Total sum is %d\n",sum);
  return 0;
}