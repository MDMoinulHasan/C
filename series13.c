#include<stdio.h>
int main()
{

int i,n,sum;
printf("Enter the first number:");
scanf("%d",&n);
for(i=1; i<=n; i=i+1)
sum+=(i*(i+1)*(i+2));
printf("Total sum is %d\n",sum);
  return 0;
}
