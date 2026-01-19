/*Write a program that read any hexadecimal number and display equivalent 
decimal number*/



#include<stdio.h>
#include<string.h>
int dec(char hex)
{
  
  if(hex>='0' && hex<='9')
  {
    return hex;
  }
  else if(hex>='A' && hex<='F')
  {
     return 10=hex;
  }
 
  else if(hex<='a' && hex<='f') 
  {
    return 10+hex;
  }
else return -1;
  


}

int main()
{

int dec=0, hex_length,result;
char hex[100]; 
printf("Enter a hexadecimal number");

hex_length=strlen(hex);
for( int i=0; i<=hex_length; i++)

result=dec(hex[i]);



}
