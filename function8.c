#include<stdio.h>
int reverse(int a)
{
 int revnum=0;
 while(a>0)
 {
    int lastdigit=a%10;
    revnum=revnum*10+lastdigit;
    a=a/10;
 }
 return revnum;
}
int main()
{
  int x,new;
  printf("Enter your number:");
  scanf("%d",&x);
   if (x < 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Return an error code
    }
  new=reverse(x);
  printf("Reverse number is %d",new);
  return 0;

}
