#include<stdio.h>
int po(int a, int b)
{
 int power=pow(a, b);
 return power;
}
int main()
{
  int x,y,s;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=po(x,y);
    printf("%d",s);
    return 0;
}