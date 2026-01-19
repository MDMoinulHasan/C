 #include <stdio.h>
 int main()
 {
 int num[100],i,n;
 printf("Enter the size\n");
 scanf("%d",&n);
 printf("Enter numbers\n");
 for(i=0; i<n; i++)
 {
 scanf("%d",&num[i]);
 }
 printf("The entered numbers are\n");
 for(i=0; i<n; i++)
 {printf(" %d",num[i]);}
 
 int min=num[0];
 for(i=0; i<n; i++){
 if(num[i]<min){
 min=num[i];
 }
 }
 printf("\nMinimum is  %d", min);
 return 0;
}