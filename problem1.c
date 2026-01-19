 #include <stdio.h>
 int main()
 {
 int num[100],i,n;
 printf("Enter the size\n");//arry size
 scanf("%d",&n);
 printf("Enter numbers\n"); //number to input
 for(i=0; i<n; i++)
 {
 scanf("%d",&num[i]); //loop for number input
 }
 printf("The reversed numbers are\n");
 for(i=n-1; i>=0; i--) //reverse loop
 {printf("%d\n",num[i]);}
 return 0;
}