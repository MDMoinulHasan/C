 #include <stdio.h>
 int main()
 {
 int num[100],i,n,d;
 printf("Enter the size:\n"); //arry size
 scanf("%d",&n);
 printf("Enter numbers:\n"); //take input
 for(i=0; i<n; i++)
 {
 scanf("%d",&num[i]); //enter arry
 }
 
 printf("Enter the number you want to search:");
 scanf("%d",&d);
 for(i=0; i<n; i++) //searching in arry
 {
 if(num[i]==d) //checking condition
 {
  printf("Available");
  break;
 }
 }
 if(num[i]!=d) 
 {
  printf("Unavailable");
 }
 
 return 0;
}