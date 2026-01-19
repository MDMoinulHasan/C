/*Write a program that read your name and display every character with one 
space */


#include<stdio.h>
#include<string.h>
int main()
{
char line[100];
printf("Enter your name: ");
fgets(line,sizeof(line),stdin);

int line_length= strlen(line);
for(int i=0; i<line_length; i++ )
{
  printf("%c ", line[i]);
}

printf("\n");


return 0;
}