 #include <stdio.h>
 int main()
 {
 int num[100],i,n,d;
 printf("Enter the size:\n"); //input size
 scanf("%d",&n);
 printf("Enter numbers:\n");
 for(i=0; i<n; i++)
 {
 scanf("%d",&num[i]);
 }
 printf("The entered numbers are:");
 for(i=0; i<n; i++)
 {printf(" %d",num[i]);}
 
 printf("\nEnter the number you want delete from \nthe list: ");
 scanf("%d",&d);
 printf("Now the numbers are\n");
 for(i=0; i<n; i++)
 {
 if(num[i]==d)
 continue;
 
 printf("%d\n", num[i]);
 
 }
 
 return 0;
}