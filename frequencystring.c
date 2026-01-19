//9. Write a program that read a line of text and display the frequency of every letter

#include<stdio.h>

int main()
{
	char str[100];
	int i, n, capital,small,digit;
    i=n=capital=small=digit=0;
    printf("Enter a line of text\n");
    gets(str);
    
    while(str[i]!='\0')
    {
    if(str[i]>=65 && str[i]<=90)
    {
    capital++;
    }
   else  if(str[i]>=97 && str[i]<=122)
    {
    small++;
    }
     else if(str[i]>=48 && str[i]<=57)
    {
    digit++;
    }
     
    i++;
    }
    printf("Number of capital is %d\n Number of small %d\n Number of Digit %d\n", capital, small, digit);
    return 0;
}