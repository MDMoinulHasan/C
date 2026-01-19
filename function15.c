/*
#include<stdio.h>
int main()
{
  int a[100],avg=0,i,n,sum=0;
  printf("How many numbers?");
  scanf("%d",&n);
  printf("Enter %d numbers",n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    sum=sum+a[i];
  }
  avg=sum/n;
  printf("Agerage is %d",avg);
  return 0;
}
*/








#include<stdio.h>
int average(int a[100], int n)
  
  {
    int i,sum=0;
  
    for(i=1;i<=n;i++)
    {
      sum=sum+a[i];
    }
    int avg=sum/n;
    return avg;
  }

  int main()
  {
    int p[100],i,num;
    int result=0;
      printf("How many numbers?\n");
    scanf("%d",&num);
    printf("Enter %d numbers\n",num);
    for(i=1;i<=num;i++)
    {
      scanf("\n%d",&p[i]);
    }
    result=average(p,num);
    printf("Average is %d",result);
    return 0;

  }
  