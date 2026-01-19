#include<stdio.h>
int main()
{
    int n,row,p,col;
    printf("Enter row num");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
     for(col=1;col<=row;col++)
     {
      p=row+64;
      printf(" %c",p);
     }
     printf("\n");
    }
    
    return 0;
}