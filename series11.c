#include<stdio.h>
int main()
{

float i,n,sum=0;
printf("Enter the last float number:");
scanf("%f",&n);
for(i=1.2; i<=n; i=i+1.2)
sum=sum+(i*i);
printf("Total sum is %.2f\n",sum);
  return 0;
}
