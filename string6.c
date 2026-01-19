/* Write a program that read any line of text and display every character with 
ASCII value in separate line*/




#include<stdio.h>
#include<string.h>
int main()
{
char line[100];
printf("Enter your name: "); 
fgets(line,sizeof(line),stdin);

int line_length= strlen(line);
for(int i=0; i<line_length; i++)
{
if(line[i] !='\n')
{
  printf("%d\n", line[i]);
}

}


printf("\n");


return 0;
}