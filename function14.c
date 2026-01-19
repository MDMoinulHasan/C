#include <stdio.h>

int prime(int n) 
{
  int i;
  
  if (n <= 1) 
  {
    return 0;  // Not a prime number
  }
  
  for (i = 2; i < n; i++) 
  {
    if (n % i == 0) 
    {
      return 0;  // Not a prime number
    }
  }
  
  return 1;  // Prime number
}

int main() 
{
  int k, x, result;
  
  printf("Enter a number: ");
  scanf("%d", &k);
  
  if (k <= 0 || k == 1) 
  {
    printf("Invalid\n");
  } else 
  {
    x = k;
    result = prime(x);
    if (result) 
    {
      printf("%d is a prime number\n", x);
    } else 
    {
      printf("%d is not a prime number\n", x);
    }
  }
  
  return 0;
}
