 #include <stdio.h>
 int main()
 {
 int org[100],i,n,new[200];
 printf("Enter the size\n");
 scanf("%d",&n);
 printf("Enter org nubers\n");
 for(i=0; i<n; i++) //loop for input
 {
 scanf("%d",&org[i]);
 }
 printf("The entered org nubers are\n");
 for(i=0; i<n; i++) //loop for output
 {printf(" %d\n",org[i]);}

 for(i=0; i<n; i++)
 {
  new[i]=org[i];

 }
 printf("The new nubers are\n");
 for(i=0; i<n; i++) //loop for output
 {printf(" %d\n",new[i]);}

 return 0;
}